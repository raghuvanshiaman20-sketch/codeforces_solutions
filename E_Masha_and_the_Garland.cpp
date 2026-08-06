#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n,q;
        cin>>n>>q;
        string s;
        cin>>s;
        vector<int> dp(n);
        for(int i=1;i<n;i++){
            dp[i]=dp[i-1];
            if(s[i]==s[i-1]) dp[i]++;
        }
        for(int i=0;i<q;i++){
            int l,r,k;
            cin>>l>>r>>k;
            if(k<(dp[r-1]-dp[l-1]+1)/2) cout<<"NO"<<endl;
            else cout<<"YES"<<endl;
        }
    }
}