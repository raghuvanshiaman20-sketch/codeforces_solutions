#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll m=998244353;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> dp(n+1);
        vector<vector<int>> adj(n+1);
        map<pair<int,int>,int> mp;
        for(int i=0;i<n-1;i++){
            int u,v;
            cin>>u>>v;
            mp[{u,v}]=i;
            mp[{v,u}]=i;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        dp[1]=1;
        vector<int> p(n+1);
        p[1]=0;
        mp[{0,1}]=-1;
        mp[{1,0}]=-1;
        stack<int> st;
        st.push(1);
        while(!st.empty()){
            int el=st.top();
            st.pop();
            for(auto it:adj[el]){
                if(p[el]==it) continue;
                p[it]=el;
                dp[it]=dp[el];
                if(mp[{it,el}]<mp[{el,p[el]}]) dp[it]++;
                st.push(it);
            }
        }
        cout<<*max_element(dp.begin(),dp.end())<<endl;
    }
}