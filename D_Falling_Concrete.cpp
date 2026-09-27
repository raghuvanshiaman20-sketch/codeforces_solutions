#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<long long> a(n);
        long long s=0;
        set<long long> st;
        priority_queue<long long> pq;
        for(int i=0;i<n;i++){
            cin>>a[i];
            st.emplace(a[i]-i);
        }
        for(auto it:st) pq.push(it);
        int ans=1,cnt=1;
        long long el=pq.top();
        pq.pop();
        while(!pq.empty()){
            long long nu=pq.top();
            if(el-nu==1){
                cnt++;
            }
            else{
                ans=max(ans,cnt);
                cnt=1;
            }
            el=nu;
            pq.pop();
        }
        ans=max(ans,cnt);
        cout<<ans<<endl;
    }
}