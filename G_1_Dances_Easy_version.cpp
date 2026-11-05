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
        int n,m;
        cin>>n>>m;
        vector<ll> a(n),b(n);
        a[0]=1;
        for(int i=1;i<n;i++) cin>>a[i];
        for(int i=0;i<n;i++) cin>>b[i];
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        vector<int> dp(n);
        for(int i=0;i<n;i++){
            int ind=upper_bound(b.begin(),b.end(),a[i])-b.begin();
            if(ind<n) dp[ind]++;
        }
        int ct=0,ans=0;
        for(int i=0;i<n;i++){
            ct+=dp[i];
            if(ct==0){
                ans++;
            }
            else ct--;
        }
        cout<<ans<<endl;
    }
}