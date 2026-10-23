#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<ll> a(n+1),dp(n+1),f(n+1,0);
        ll s=0,ma=0;
        for(int i=1;i<=n;i++){
            cin>>a[i];
            s+=a[i];
            dp[i]=dp[i-1];
            dp[i]+=a[i];
        }
        for(int i=1;i<=n;i++) f[i]=1ll*i*i+i-dp[i];
        ll mn=f[0];
        for(int i=1;i<=n;i++){
            mn=min(mn,f[i]);
            ma=max(ma,f[i]-mn);
        }
        cout<<s+ma<<endl;
    }
}