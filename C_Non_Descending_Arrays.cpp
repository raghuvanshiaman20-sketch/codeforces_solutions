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
        vector<int> a(n+1),b(n+1);
        for(int i=1;i<=n;i++) cin>>a[i];
        for(int i=1;i<=n;i++) cin>>b[i];
        int co=0;
        int ma=max(a[1],b[1]);
        ll ans=2;
        for(int i=2;i<=n;i++){
            if(a[i]==b[i])   ans=(ans*2)%m;
            if(a[i]!=b[i]&&ma<=min(a[i],b[i])) ans=(ans*2)%m;
            ma=max({a[i],b[i],ma});
        }
        cout<<ans<<endl;
    }
}