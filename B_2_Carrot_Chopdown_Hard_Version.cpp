#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        vector<int> a(n);
        vector<int> dp(m+1);
        vector<long long> ans(m+1);
        for(int i=0;i<n;i++){
            cin>>a[i];
            dp[a[i]]++;
        }
        for(int i=1;i<=m;i++) dp[i]+=dp[i-1];
        vector<long long> cnt(m+1);
        for(int i=1;i<=m;i++){
            for(int j=i;j<=m;j+=i){
                int l=j,r=j+i-1;
                r=min(r,m);
                cnt[i]+=(dp[r]-dp[l-1])*(j/i);
            }
        }
        sort(a.begin(),a.end());
        long long p=2;
        long long total=*max_element(cnt.begin(),cnt.end());
        for(int i=1;i<=m;i++){
            if(p>=a[n-1]){
                ans[i]=total;
                continue;
            }
            for(int len=1;len<=m;len++){
                if(p*len>m) continue;
                long long val=0;
                for(int j=p;j*len<=m;j++){
                    int l=j*len,r=(j+1)*len-1;
                    r=min(r,m);
                    int count=dp[r]-dp[l-1];
                    val+=(j-p+1)*count;
                }
                val-=(dp[p*len]-dp[p*len-1]);
                ans[i]=max(ans[i],cnt[len]-val);
            }
            p*=2;
        }
        for(int i=1;i<=m;i++) cout<<ans[i]<<" ";
        cout<<endl;
    }
}