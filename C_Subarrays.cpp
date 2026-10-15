#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<long long> a(n+1),dp(n+1);
        for(int i=1;i<=n;i++){
            cin>>a[i];
            dp[i]=dp[i-1];
            dp[i]+=a[i];
        }
        for(int i=1;i<=n;i++) dp[i]%=k;
        vector<long long> c(k);
        ll ans=0;
        for(int i=1;i<=n;i++){
            int l=i-k-1;
            if(l>=0) c[dp[l]]++;
            ans+=c[dp[i]];
        }
        cout<<ans<<endl;
    }
}