#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,k;
    cin>>n>>k;
    vector<long long> a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    vector<vector<int>> dp(k+1,vector<int>(5001,-1));
    vector<int> p5(n),p2(n);
    dp[0][0]=0;
    for(int i=0;i<n;i++){
        long long el=a[i];
        int cnt=0;
        while(el%5==0&&el>0){
            el/=5;
            cnt++;
        }
        p5[i]=cnt;
        cnt=0;
        while(el%2==0&&el>0){
            el/=2;
            cnt++;
        }
        p2[i]=cnt;
    }
    for(int i=0;i<n;i++){
        for(int j=k-1;j>=0;j--){
            for(int l=5000-p5[i];l>=0;l--){
                if(dp[j][l]<0) continue;
                dp[j+1][l+p5[i]]=max(dp[j+1][l+p5[i]],dp[j][l]+p2[i]);
            }
        }
    }
    int ans=0;
    for(int i=0;i<=5000;i++){
        ans=max(ans,min(i,dp[k][i]));
    }
    cout<<ans<<endl;
    
}