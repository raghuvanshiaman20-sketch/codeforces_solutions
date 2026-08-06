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
        vector<int> a(2*n+1);
        vector<int> occ(n+1,0),f(n+1,0),l(n+1,0);
        for(int i=1;i<=2*n;i++){
            cin>>a[i];
            occ[a[i]]++;
            if(occ[a[i]]==1) f[a[i]]=i;
            if(occ[a[i]]==2) l[a[i]]=i;
        }
        vector<long long> dp(2*n+1);
        for(int i=2;i<=2*n;i++){
            dp[i]=dp[i-1];
            if(l[a[i]]==i){
                long long s=l[a[i]]-f[a[i]]+1;
                long long p=s*s-s;
                dp[i]=max(dp[i],dp[f[a[i]]-1]+p);
            }
        }
        cout<<2ll*n + dp[2*n]<<endl;
    }
}