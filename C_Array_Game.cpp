#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll m=998244353;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        ll k;
        cin>>k;
        vector<ll> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        if(k>=3){
            cout<<0<<endl;
            continue;
        }
        sort(a.begin(),a.end());
        ll mi=LONG_LONG_MAX;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(i==j) continue;
                mi=min(mi,abs(a[i]-a[j]));
            }
        }
        if(k==1){
            cout<<min(mi,a[0])<<endl;
        }
        else if(k==2){
            ll ans=LONG_LONG_MAX;
            for(int i=0;i<n;i++){
                for(int j=0;j<n;j++){
                    if(i==j) continue;
                    ll el=abs(a[i]-a[j]);
                    ans=min(ans,el);
                    int ind=lower_bound(a.begin(),a.end(),el)-a.begin();
                    if(ind==0){
                        ans=min(ans,abs(a[0]-el));
                    }
                    else if(i==n) continue;
                    else{
                        ans=min({ans,abs(a[ind]-el),abs(a[ind-1]-el)});
                    }
                }
            }
            cout<<min(ans,a[0])<<endl;
        }
    }
}