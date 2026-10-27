#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<ll> a(n+1),s(n+1);
        for(int i=1;i<=n;i++) cin>>a[i];
        ll ans=a[1];
        ll h=0,l=0;
        for(int i=1;i<=n;i++){
            ans=max({a[i]+h,a[i]-l,ans});
            h=max(a[i],a[i]+2*h);
            l=min(a[i],a[i]+2*l);
        }
        cout<<ans<<endl;
    }
}