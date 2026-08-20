#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> adj(100001);
vector<int> par(100001);
vector<int> d(100001);    
vector<int> cnt(100001);  
vector<int> c;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        for(int i=1;i<=n;i++){
            adj[i].clear();
            d[i] = 0;
            cnt[i] = 0;
            par[i] = 0;
        }
        for(int i=2;i<=n;i++){
            int x;
            cin>>x;
            par[i]=x;
            adj[x].push_back(i);
        }
        int m;
        cin>>m;
        for(int i=0;i<m;i++){
            int x;
            cin>>x;
            d[x]=1;
        }
        vector<int> o;
        o.push_back(1);
        for(int i=0;i<o.size();i++){
            int v=o[i];
            for(auto it:adj[v]){
                o.push_back(it);
            }
        }
        c.clear();
        for(int i=o.size()-1;i>=0;i--){
            int v=o[i];
            vector<int> cdam;
            for(auto it:adj[v]){
                if(cnt[it]>0){
                    cdam.push_back(it);
                }
            }
            if(d[v]==1){
                for(auto it:cdam){
                    c.push_back(it);
                }
            } 
            else{
                for(int j=0;j+1<cdam.size();j++){
                    c.push_back(cdam[j]);
                }
            }
            cnt[v]=d[v];
            for(auto child:adj[v]){
                cnt[v]+=cnt[child];
            }
        }
        cout<<c.size()<< " ";
        for(auto it:c){
            cout<<it<<" "; 
        }
        cout<<endl;
    }
}