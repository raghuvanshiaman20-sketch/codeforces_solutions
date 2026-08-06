#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> adj;
vector<int> s(200001,0),e(200001,0),pos(200001,0);
int c=1;
// void euler_tour(int root) {
//     vector<int> parent(adj.size(), 0);
//     vector<int> idx(adj.size(), 0);
//     stack<int> st;
//     st.push(root);
//     parent[root] = -1;
//     while (!st.empty()) {
//         int at = st.top();
//         if (idx[at] == 0) {
//             pos[at] = c;
//             s[at] = c++;
//         }
//         if (idx[at] < (int)adj[at].size()) {
//             int child = adj[at][idx[at]++];
//             if (child != parent[at]) {
//                 parent[child] = at;
//                 st.push(child);
//             }
//         } else {
//             e[at] = c;
//             st.pop();
//         }
//     }
// }
vector<int> seg(4 * 200001);
vector<bool> lazy(4 * 200001);

void build(int node, int l, int r, vector<int>& lights) {
    if (l == r) {
        seg[node] = lights[l];
        return;
    }

    int mid = (l + r) / 2;
    build(node * 2, l, mid, lights);
    build(node * 2 + 1, mid + 1, r, lights);

    seg[node] = seg[node * 2] + seg[node * 2 + 1];
}

void flipNode(int node, int l, int r) {
    seg[node] = (r - l + 1) - seg[node];
    lazy[node] = !lazy[node];
}

void push(int node, int l, int r) {
    if (!lazy[node] || l == r) return;

    int mid = (l + r) / 2;

    flipNode(node * 2, l, mid);
    flipNode(node * 2 + 1, mid + 1, r);

    lazy[node] = false;
}

void update(int node, int l, int r, int ql, int qr) {
    if (ql <= l && r <= qr) {
        flipNode(node, l, r);
        return;
    }

    push(node, l, r);
    int mid = (l + r) / 2;

    if (ql <= mid)
        update(node * 2, l, mid, ql, qr);

    if (qr > mid)
        update(node * 2 + 1, mid + 1, r, ql, qr);

    seg[node] = seg[node * 2] + seg[node * 2 + 1];
}

int query(int node, int l, int r, int ql, int qr) {
    if (ql <= l && r <= qr) {
        return seg[node];
    }

    push(node, l, r);
    int mid = (l + r) / 2;
    int ans = 0;

    if (ql <= mid)
        ans += query(node * 2, l, mid, ql, qr);

    if (qr > mid)
        ans += query(node * 2 + 1, mid + 1, r, ql, qr);

    return ans;
}
void euler_tour(int at,int prev){
    pos[at]=c;
    s[at]=c++;
    for(auto it: adj[at]){
        if(it!=prev) euler_tour(it,at);
    }
    e[at]=c;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
        int n; 
        cin>>n;
        adj=vector<vector<int>> (n+1);
        vector<int> a(n+1);
        for(int i=0;i<n-1;i++){
            int x;
            cin>>x;
            adj[x].push_back(i+2);
        }
        for(int i=1;i<=n;i++) cin>>a[i];
        euler_tour(1,0);
        vector<int> sub_tree(n+1),lights(n+1);
        for(int i=1;i<=n;i++){
            sub_tree[pos[i]]=e[i]-s[i];
            lights[pos[i]]=a[i];
        }
        build(1, 1, n, lights);
        int q;
        cin>>q;
        for(int i=0;i<q;i++){
    string st;
    int x;
    cin >> st >> x;

    int left = pos[x];
    int right = e[x] - 1;

    if (st == "get") {
        cout << query(1, 1, n, left, right) << '\n';
    } else { // pow
        update(1, 1, n, left, right);
    }

        }
}