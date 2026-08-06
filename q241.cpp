#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n;
        long long k;
        cin>>n>>k;
        vector<array<long long,3>> a(n);
        long long l=0,real=0,r=0;
        for(int i=0;i<n;i++){
            cin>>a[i][0]>>a[i][1]>>a[i][2];
            if(a[i][2]>real){
                real=a[i][2];
                l=a[i][0],r=a[i][1];
            }
        }
        sort(a.begin(),a.end());
        int fl=0;
        for(int i=0;i<n;i++){
            if(k>=l&&k<=r){
                fl=1;
                break;
            }
            if(k>=a[i][0]&&k<=a[i][1]){
                if(a[i][2]>k) k=a[i][2];
            }
            else continue;
        }
        if(fl) cout<<max(k,real)<<endl;
        else cout<<k<<endl;
    }
}