#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<vector<int>> adj(n+1);
        for(int i=1;i<n;i++){
            int x;
            cin>>x;
            adj[x].push_back(i+1);
        }
        long long ans=n;
        vector<int> d(n+1);
        vector<pair<int,int>> p;
        stack<int> st;
        st.push(1);
        d[1]=0;
        while(!st.empty()){
            int el=st.top();
            st.pop();
            for(auto it: adj[el]){
                d[it]=d[el]+1;
                p.push_back({d[it],el});
                st.push(it);
            }
        }
        sort(p.begin(),p.end());
        int cnt=0,pp=0,de=0,i=0;
        for(auto it:p){
            if(i==0){
                cnt++;
                pp=it.second;
                de=it.first;
                i++;
                continue;
            }
            if(pp==it.second&&de==it.first){
                cnt++;
            }
            else{
                if(cnt>=2) ans++;
                cnt=1;
                pp=it.second;
                de=it.first;
            }
        }
        if(cnt>=2) ans++;
        cout<<ans<<endl;
    }
}