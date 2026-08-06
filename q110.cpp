#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n,l,r;
        cin>>n>>l>>r;
        vector<long long> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        long long ans=0;
        sort(a.begin(),a.end());
        for(int i=0;i<n;i++){
            ans+=lower_bound(a.begin(),a.end(),r+1-a[i])-a.begin();
            ans-=lower_bound(a.begin(),a.end(),l-a[i])-a.begin();
            if(l<=2*a[i]&&2*a[i]<=r) ans--;
        }

        cout<<ans/2<<endl;
    }
}