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
        vector<int> a(n+1);
        vector<long long> dp(n+1);
        vector<queue<int>> v(n+1);
        for(int i=1;i<=n;i++){
            cin>>a[i];
        }
        for(int i=1;i<=n;i++){
            dp[i]=dp[i-1];
            v[a[i]].push(i);
            if(v[a[i]].size()>a[i]) v[a[i]].pop();
            if(v[a[i]].size()==a[i]) dp[i]=max(dp[i],dp[v[a[i]].front()-1]+a[i]);
        }
        cout<<dp[n]<<endl;
    }
}