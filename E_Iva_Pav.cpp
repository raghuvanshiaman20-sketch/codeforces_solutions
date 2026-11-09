#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll m=998244353;
bool bs(vector<vector<int>> &p,ll i,ll k,ll l){
    ll val=0;
    for(int j=0;j<=31;j++){
        if(p[i][j]-p[l-1][j]>=i-l+1) val+=(1<<j);
    }
    if(val>=k) return true;
    return false;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<ll> a(n+1);
        for(int i=1;i<=n;i++) cin>>a[i];
        vector<vector<int>> pre(n+1,vector<int>(32,0));
        for(int i=1;i<=n;i++){
            for(int j=0;j<=31;j++){
                if(a[i]&(1<<j)) pre[i][j]++;
            }
        }
        for(int i=0;i<=31;i++){
            for(int j=1;j<=n;j++){
                pre[j][i]+=pre[j-1][i];
            }
        }
        int q;
        cin>>q;
        for(int i=0;i<q;i++){
            ll l,k;
            cin>>l>>k;
            int ans=-1,r=n,le=l;
            while(l<=r&&l<=n){
                int m=l+(r-l)/2;
                if(bs(pre,m,k,le)){
                    ans=m;
                    l=m+1;
                }
                else r=m-1;
            }
            cout<<ans<<" ";
        }
        cout<<endl;
    }
}