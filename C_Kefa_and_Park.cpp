#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,m;
    cin>>n>>m;
    vector<vector<int>> adj(n+1);
    vector<int> a(n+1);
    vector<int> c(n+1);
    for(int i=1;i<=n;i++) cin>>a[i];
    for(int i=0;i<n-1;i++){
        int x,y;
        cin>>x>>y;
        c[x]++;
        adj[x].push_back(y);
        adj[y].push_back(x);
        c[y]++;
    }
    int ans=0;
    stack<pair<int,int>> st;
    int c_n=0;
    if(a[1]==1) c_n++;
    st.push({1,c_n});
    vector<int> v(n+1);
    while(!st.empty()){
        int el=st.top().first;
        c_n=st.top().second;
        st.pop();
        if(c[el]==1&&c_n<=m&&el!=1) ans++;
        if(v[el]==0){
            v[el]=1;
            for(auto it:adj[el]){
                int org=c_n;
                if(a[it]==1) org++;
                if(a[it]==0) org=0;
                if(org<=m&&v[it]==0) st.push({it,org});
            }
        }
    }
    cout<<ans<<endl;
}