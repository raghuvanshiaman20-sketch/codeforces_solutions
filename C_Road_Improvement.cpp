#include <bits/stdc++.h>
using namespace std; 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    vector<int> d(n+1);
    vector<vector<pair<int,int>>> adj(n+1);
    for(int i=1;i<n;i++){
        int u,v;
        cin>>u>>v;
        d[u]++;
        d[v]++;
        adj[u].push_back({v,i});
        adj[v].push_back({u,i});
    }
    int k=*max_element(d.begin(),d.end());
    cout<<k<<endl;
    vector<int> visit(n+1);
    vector<vector<int>> b(k+1);
    stack<int>  st;
    st.push(1);
    visit[1]=1;
    vector<int> ec(n);
    vector<int> pec(n+1);
    while(!st.empty()){
        int u=st.top();
        st.pop();
        int s=pec[u];
        int c=0;
        for(auto it : adj[u]){
            if(visit[it.first]==0){
                c++;
                if(s==c) c++;
                ec[it.second]=c;
                b[c].push_back(it.second);
                pec[it.first]=c;
                visit[it.first]=1;
                st.push(it.first);
            }
        }
    }
    for(int i=1;i<=k;i++){
        cout<<b[i].size();
        for(auto it:b[i]) cout<<" "<<it;
        cout<<endl;
    }
}
