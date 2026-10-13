#include <bits/stdc++.h>
using namespace std;
#define ll long long
bool val(ll c,ll n){
    ll i=c;
    while(i>=2&&n>0){
        long long d=c/i;
        n-=min(n,d*i);
        i--;
    }
    return n<=c;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll hi=n,lo=1;
        ll ans;
        while(hi>=lo){
            ll mid=(hi+lo)/2;
            if(val(mid,n)){
                hi=mid-1;
                ans=mid;
            }
            else{
                lo=mid+1;
            }
        }
        cout<<ans<<endl;
        vector<long long> v(ans+1);
        ll i=ans;
        while(i>=1&&n>0){
            ll d=ans/i;
            v[i]=min(n/i,d);
            n-=v[i]*i;
            i--;
        }
        int b=1;
        for(int i=1;i<=ans;i++){
            while(v[i]>0){
                for(int j=1;j<=i;j++){
                    cout<<b<<" ";
                }
                b++;
                v[i]--;
            }
        }
        cout<<endl;
    }
}