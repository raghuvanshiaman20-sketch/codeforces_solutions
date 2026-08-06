#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n,x;
        cin>>n>>x;
        vector<long long> a(n),l(n),r(n);
        for(long long i=0;i<n;i++){
            cin>>a[i];
            l[i]=a[i]-x;
            r[i]=a[i]+x;
        }
        long long cnt=0,la=l[0],ra=r[0];
        for(long long i=1;i<n;i++){
          la=max(la,l[i]);
          ra=min(ra,r[i]);
          if(la>ra){
            la=l[i];
            ra=r[i];
            cnt++;
          }
        }
        cout<<cnt<<endl;
    }
}