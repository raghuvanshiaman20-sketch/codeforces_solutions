#include <bits/stdc++.h>
using namespace std;
vector<int> rel(200001);
bool cmp(int a,int b){
    return rel[a]<rel[b];
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    vector<int> o(n);
    vector<bool> visit(n);
    queue<int> q;
    vector<vector<int>> adj(n);
    vector<int> p(n);
    for(int i=0;i<(n-1);i++){
        int x,y;
        cin>>x>>y;
        x--,y--;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    for(int i=0;i<n;i++){
        cin>>p[i];
        p[i]--;
        rel[p[i]]=i;
    }
    for(int i=0;i<n;i++){
        sort(adj[i].begin(),adj[i].end(),cmp);
    }
    q.push(0);
    visit[0]=true;
    o[0]=0;
    int i=1;
    while(!q.empty()){
        int el=q.front();
        q.pop();
        for(auto it:adj[el]){
            if(!visit[it]){
                visit[it]=true;
                q.push(it);
                o[i]=it;
                i++;
            }
        }
    }
    int fl=0;
    for(int i=0;i<n;i++){
        if(p[i]!=o[i]){
            fl=1;
            break;
        }
    }
    if(fl) cout<<"No\n";
    else cout<<"Yes\n";
}
