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
        for(int i=0;i<n-1;i++){
            int x,y;
            cin>>x>>y;
            adj[x].push_back(y);
            adj[y].push_back(x);
        }
        vector<set<int>> p(n+1);
        vector<int> d(n+1),cnt(n+1);
        stack<int> st;
        st.push(1);
        d[1]=1;
        cnt[1]=1;
        while(!st.empty()){
            int el=st.top();
            st.pop();
            for(auto it:adj[el]){
                if(d[it]==0){
                    d[it]=d[el]+1;
                    cnt[d[it]]++;
                    p[d[it]].emplace(el);
                    st.push(it);
                }
            }
        }
        int ans=0;
        for(int i=2;i<=n;i++){
            int total=cnt[i];
            if(p[i].size()==1) total++;
            ans=max(ans,total);
        }
        cout<<ans<<endl;
    }
}