#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> adj(200001);
vector<int> vis(200001);
vector<int> col(200001,-1);
bool dfs(int el,int& cnt,vector<int>& vis,vector<int>& col,vector<vector<int>> adj){
    vis[el]=1;
    cnt++;
    for(auto it:adj[el]){
        if(col[it]==-1){
            col[it]=1-col[el];
            if(!dfs(it,cnt,vis,col,adj)) return false;
        }
        else if(col[it]==col[el]) return false;
    }
    return true;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        for(int i=1;i<=n;i++) adj[i].clear(),vis[i]=0,col[i]=-1;
        for(int i=0;i<m;i++){
            int x,y;
            cin>>x>>y;
            adj[x].push_back(y);
            adj[y].push_back(x);
        }
        int ans=0;
        for(int i=1;i<=n;i++){
            if(vis[i]==0){
                col[i]=0;
                int cnt=0;
                if(dfs(i,cnt,vis,col,adj)){
                    cnt++;
                    ans+=(cnt/2);
                }
            }
        }
        cout<<ans<<endl;
    }
}