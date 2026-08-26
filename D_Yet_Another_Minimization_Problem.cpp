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
        vector<int> a(n),b(n),diff(n);
        long long s_a=0,s_b=0,s_t=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            s_a+=a[i];
        }
        for(int i=0;i<n;i++){
            cin>>b[i];
            s_b+=b[i];
        }
        s_t=s_a+s_b;
        if(n==1){
            cout<<0<<endl;
            continue;
        }
        long long ans=0,s_min=0;
        for(int i=0;i<n;i++){
            ans+=(a[i]*a[i]+b[i]*b[i])*(n-2);
            s_min+=min(a[i],b[i]);
            diff[i]=abs(a[i]-b[i]);
        }
        int total=accumulate(diff.begin(),diff.end(),0);
        vector<bool> dp(total+1,false);
        dp[0]=true;
        for(auto it:diff){
            for(int s=total;s>=it;s--){
                dp[s]=dp[s]||dp[s-it];
            }
        }
        long long real=s_a*s_a+s_b*s_b;
        for(int i=0;i<=total;i++){
            if(dp[i]){
                real=min(real,(s_min+i)*(s_min+i)+(s_t-s_min-i)*(s_t-s_min-i));
            }
        }
        cout<<ans+real<<endl;
    }
}