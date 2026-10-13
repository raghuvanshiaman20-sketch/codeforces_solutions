#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<vector<int>> adj(n+1);
        vector<int> vis(n+1);
        vector<int> ans;
        vector<int> indeg(n+1);
        for(int i=0;i<n-1;i++){
            int u,v;
            long long x,y;
            cin>>u>>v>>x>>y;
            if(x>=y){
                adj[v].push_back(u);
                indeg[u]++;
            }
            else{
                adj[u].push_back(v);
                indeg[v]++;
            }
        }
        queue<int> q;
        for(int i=1;i<=n;i++){
            if(indeg[i]==0) q.push(i);
        }
        while(!q.empty()){
            int el=q.front();
            q.pop();
            ans.push_back(el);
            for(auto it:adj[el]){
                indeg[it]--;
                if(indeg[it]==0) q.push(it);
            }
        }
        vector<int> p(n+1);
        int val=1;
        for(auto it:ans){
            p[it]=val;
            val++;
        }
        for(int i=1;i<=n;i++) cout<<p[i]<<" ";
        cout<<endl;
    }
}