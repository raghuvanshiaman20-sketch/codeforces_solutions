#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<string> a(2);
        cin>>a[0];
        cin>>a[1];
        vector<int> dp(n+1,INFINITY);
        dp[0]=0;
        for(int i=0;i<n;i++){
            dp[i+1]=min(dp[i+1],dp[i]+(a[0][i]!=a[1][i]));
            if(i+1<n){
                dp[i+2]=min(dp[i+2],dp[i]+(a[0][i]!=a[0][i+1])+(a[1][i]!=a[1][i+1]));
            }
        }
        cout<<dp[n]<<endl;
        
    
    }
}