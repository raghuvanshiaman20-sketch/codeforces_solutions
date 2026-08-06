#include <bits/stdc++.h>
using namespace std;
vector<int> p(100001),dep(100001,0),vis(100001,0);
vector<vector<int>> adj(100001);
int z=1;
int fl=0;
void dfs(int v,int par){
    vis[v]=1;
    p[v]=par;
    for(auto it: adj[v]){
        if(fl) return;
        if(it==p[v]) continue;
        if(vis[it]==0){
            vis[it]=1;
            dep[it]=dep[v]+1;
            dfs(it,v);
        }
        else if(dep[it]<dep[v]){
            int cl=dep[v]-dep[it]+1;
            if(cl>=z){
                fl=1;
                cout<<2<<endl;
                cout<<cl<<endl;
                cout<<v<<" ";
                int i=p[v];
                while(i!=it){
                    cout<<i<<" ";
                    i=p[i];
                }
                cout<<it<<endl;
                return ;
            }
        }
    }
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m;
    cin>>n>>m;
    for(int i=0;i<m;i++){
        int x,y;
        cin>>x>>y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    while(z*z<n){
        z++;
    }
    dfs(1,0);
    if(fl==1) return 0;
    int s=1;
    while(s*s<=n) s++;
    s--;
    vector<vector<int>> g(s);
    for(int i=1;i<=n;i++){
        g[dep[i]%s].push_back(i);
    }
    for(int i=0;i<s;i++){
        if(g[i].size()>=z){
            cout<<1<<endl;
            for(auto it:g[i]){
                cout<<it<<" ";
                z--;
                if(z==0){
                    cout<<endl;
                    break;
                }
            }
            break;
        }
    }
}
