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
        vector<ll> v(n);
        ll mv=LONG_LONG_MAX;
        for(int i=0;i<n;i++) cin>>v[i];
        ll ma=*max_element(v.begin(),v.end());
        ll mi=*min_element(v.begin(),v.end());
        ll c=0,ca=0;
        sort(v.begin(),v.end());
        for(int i=n-2;i>=0;i--){
            v[i]+=ca;
            ll ans1=(v[i+1]-v[i])*(n-i-1);
            ll ans2=(v[i+1]-v[i])*(i+1);
            if(ans1<=ans2){
                c+=ans1;
                ca+=v[i+1]-v[i];
                v[i]=v[i+1];
            }
            else c+=ans2;
        }
        mv=ma-mi;
        cout<<c<<" "<<mv<<endl;
    }
}