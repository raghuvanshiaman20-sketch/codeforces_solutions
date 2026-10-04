#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> a(n + 1);
        vector<vector<int>> adj(n + 1);
        vector<vector<int>> adj_(n + 1);
        for (int i = 1; i <= n; i++) {
            cin >> a[i];
            adj[a[i]].push_back(i); 
            adj_[i].push_back(a[i]); 
        }
        vector<int> vis(n + 1, 0);
        queue<int> q;
        q.push(1);
        vis[1] = 1;
        int ans = 0;
        while (!q.empty()) {
            int el = q.front();
            q.pop();
            ans++;
            for (int it : adj[el]) {
                if (vis[it] == 0) {
                    vis[it] = 1;
                    q.push(it);
                }
            }
        }
        vector<int> vis_(n + 1, 0);
        priority_queue<int> pq;
        for (int i = 1; i <= n; i++) {
            if (vis_[i] == 1) continue;
            int cnt = 0;
            q.push(i);
            vis_[i] = 1;
            while (!q.empty()) {
                int el = q.front();
                q.pop();
                if (vis[el] == 0) cnt++;
                for (int it : adj_[el]) {
                    if (vis_[it] == 0) {
                        vis_[it] = 1;
                        q.push(it);
                    }
                }
                for (int it : adj[el]) {
                    if (vis_[it] == 0) {
                        vis_[it] = 1;
                        q.push(it);
                    }
                }
            }
            pq.push(cnt);
        }
        while (!pq.empty() && k > 0) {
            ans += pq.top();
            pq.pop();
            k--;
        }
        cout << min(n, ans) << '\n';
    }
}