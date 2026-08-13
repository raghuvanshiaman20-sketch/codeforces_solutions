#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> adj(200001);
long long ans=0;
vector<int> h;
void dfs(int el,int p){
    int mx=0,smx=0;
    for(auto it: adj[el]){
        if(it==p) continue;
        dfs(it,el);
        int x=h[it]+1;
        if(x>=mx){
            smx=mx;
            mx=x;
        }
        else smx=max(smx,x);
    }
    h[el]=mx;
    ans+=smx;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        for(int i=1;i<=n;i++) adj[i].clear();
        ans=n;
        h=vector<int>(n+1,0);
        vector<int> p(n+1);
        for(int i=2;i<=n;i++){
            cin>>p[i];
            adj[p[i]].push_back(i);
            adj[i].push_back(p[i]);
        }
        dfs(1,0);
        cout<<ans<<endl;
    }
}