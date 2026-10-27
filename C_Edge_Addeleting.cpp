#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        vector<vector<int>> adj(n+1);
        for(int i=0;i<n-1;i++){
            int x,y;
            cin>>x>>y;
            adj[x].push_back(y);
            adj[y].push_back(x);
        }
        vector<int> dist(n+1);
        dist[n]=0;
        stack<int> st;
        st.push(n);
        while(!st.empty()){
            int el=st.top();
            st.pop();
            for(auto it:adj[el]){
                if(dist[it]==0){
                    dist[it]=dist[el]+1;
                    st.push(it);
                }
            }
        }
        vector<int> ef(n+1);
        queue<int> q;
        q.push(n);
        ef[n]=1;
        while(!q.empty()){
            int el=q.front();
            q.pop();
            if(el==1) continue;
            for(auto it:adj[el]){
                if(ef[it]==0){
                    ef[it]=1;
                    q.push(it);
                }
            }
        }
        int ma=dist[1];
        for(int i=0;i<m;i++){
            int x;
            cin>>x;
            if(ef[x]==1&&x!=n) ma=max(ma,dist[x]+1);
        }
        cout<<ma<<endl;
    }
}