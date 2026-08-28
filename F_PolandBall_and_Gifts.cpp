#include <bits/stdc++.h>
using namespace std;
bitset<1000005> dp;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,k;
    cin>>n>>k;
    vector<int> a(n+1);
    for(int i=1;i<=n;i++) cin>>a[i];
    vector<bool> vis(n+1);
    vector<int> freq(n+1);
    int s=0;
    for(int i=1;i<=n;i++){
        if(!vis[i]){
            int curr=i;
            int len=0;
            while(!vis[curr]){
                vis[curr]=true;
                len++;
                curr=a[curr];
            }
            s+=len/2;
            freq[len]++;
        }
    }
    dp[0]=1;
    for(int i=1;i<=n;i++){
        if(freq[i]==0) continue;
        int cnt=freq[i];
        for(int b=1;cnt>0;b<<=1){
            int take=min(b,cnt);
            dp |= (dp << (take*i));
            cnt-=take;
        }
    }
    if(dp[k]) cout<<k<<" ";
    else cout<<k+1<<" ";
    cout<<min(n,k+min(s,k));
}