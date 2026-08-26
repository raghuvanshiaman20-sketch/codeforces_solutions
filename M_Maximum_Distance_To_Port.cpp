#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m,k;
    cin>>n>>m>>k;
    vector<int> c(n+1);
    for(int i=1;i<=n;i++){
        cin>>c[i];
    }
    vector<vector<int>> adj(n+1);
    for(int i=0;i<m;i++){
        int x,y;
        cin>>x>>y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    vector<int> co(k+1,0);
    vector<int> de(n+1,2000001);
    vector<int> vis(n+1,-1);
    queue<int> st;
    st.push(1);
    de[1]=0;
    co[c[1]]=0;
    while(!st.empty()){
        int el=st.front();
        st.pop();
        vis[el]=1;
        for(auto it:adj[el]){
            if(vis[it]==1) continue;
            de[it]=min(de[it],de[el]+1);
            co[c[it]]=max(co[c[it]],de[it]);
            st.push(it);
        }
    }
    for(int i=1;i<=k;i++){
        cout<<co[i]<<" ";
    }
    cout<<endl;
}