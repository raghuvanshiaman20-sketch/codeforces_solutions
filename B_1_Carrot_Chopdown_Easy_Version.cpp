#include <bits/stdc++.h>
using namespace std;
bitset<1000005> dp;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        vector<int> a(n);
        vector<int> b(m+1);
        for(int i=0;i<n;i++){
            cin>>a[i];
            b[a[i]]++;
        }
        sort(a.begin(),a.end());
        int ans=n,sum=0;
        vector<int> dp(m+1);
        for(int i=1;i<=m;i++){
            dp[i]=b[i]+dp[i-1];
        }
        for(int i=1;i<=m;i++){
            if(i%2==0){
                int total=b[i]*2;
                total+=n-b[i]-sum;
                total+=dp[i-1]-dp[i/2-1];
                ans=max(ans,total);
            }
            sum+=b[i];
        }
        cout<<ans<<endl;
    }
}