#include <bits/stdc++.h>
using namespace std;
vector<int> p(200001);
int main(){
    int t;
    cin>>t;
    for(int i=2;i<=200000;i++){
        if(p[i]==0){
            for(int j=i;j<=200000;j+=i){
                if(p[j]==0) p[j]=i;
            }
        }
    }
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        vector<long long> dp(n+1);
        for(int i=k+1;i<=n;i++){
            dp[i]=LLONG_MAX;
            int y=i;
            while(y>1){
                int f=p[y];
                dp[i]=min(dp[i],1ll+dp[i/f]*f);
                while(y%f==0) y/=f;
            }
        }
        long long ans=0;
        for(int i=0;i<n;i++){
            ans+=dp[a[i]];
        }
        cout<<ans<<endl;
    }
}