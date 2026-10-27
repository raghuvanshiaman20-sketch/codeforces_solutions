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
        vector<ll> a(n);
        ll mn=LONG_LONG_MAX;
        for(int i=0;i<n;i++){
            cin>>a[i];
            mn=min(a[i],mn);
        }
        if(mn>=n) cout<<0<<endl;
        else cout<<n<<endl;
    }
}