#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        vector<vector<int>> adj(n+1);
        vector<int> col(n+1,-1);
        for(int i=0;i<m;i++){
            int x,y;
            cin>>x>>y;
            adj[x].push_back(y);
            adj[y].push_back(x);
        }
        int ans=0;
        for(int i=1;i<=n;i++){
            if(col[i]==-1){
                queue<int> q;
                q.push(i);
                vector<int> cnt(2);
                col[i]=0;
                bool r=true;
                while(!q.empty()){
                    int el=q.front();
                    q.pop();
                    cnt[col[el]]++;
                    for(auto it:adj[el]){
                        if(col[it]==col[el]) r=false;
                        else if(col[it]==-1){
                            col[it]=col[el]^1;
                            q.push(it);
                        }
                    }
                }
                if(r) ans+=max(cnt[0],cnt[1]);
            }
        }
        cout<<ans<<endl;
    }
}