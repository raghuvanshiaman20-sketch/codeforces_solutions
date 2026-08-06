#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<long long> a(n+1),b(n+1),d(n+1);
        for(int i=1;i<=n;i++){
            cin>>a[i];
        }
        for(int i=1;i<=n;i++){
            cin>>b[i];
            d[i]=b[i]-a[i];
        }
        for(int i=n;i>1;i--){
            if(d[i]<0) d[i-1]+=d[i];
        }
        if(d[1]<0) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
}