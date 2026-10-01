#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<vector<int>> adj(n+1);
        for(int i=1;i<n;i++){
            int u,v;
            cin>>u>>v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        int l=0;
        int maxi=0;
        for(int i=1;i<=n;i++){
            if(adj[i].size()==1) l++;
        }
        vector<int> ln(n+1);
        vector<int> vis(n+1,0);
        stack<int> st;
        st.push(1);
        while(!st.empty()){
            int el=st.top();
            vis[el]=1;
            st.pop();
            for(auto it:adj[el]){
                if(adj[it].size()==1) ln[el]++;
                if(vis[it]==0) st.push(it);
            }
        }
        if(n<=2) cout<<0<<endl;
        else cout<<l-*max_element(ln.begin(),ln.end())<<endl;
    }
}