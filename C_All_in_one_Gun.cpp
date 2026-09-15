#include <bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
   int n;
   long long h,k;
   cin>>n>>h>>k;
   vector<long long> a(n+1);
   long long s=0;
   for(int i=1;i<=n;i++){
       cin>>a[i];
       s+=a[i];
   }
   long long t=(h/s)*(n+k);
   h=h%s;
   if(h==0) cout<<t-k<<endl;
   else{
       vector<long long> mini(n+1),maxi(n+1),pre(n+1);
       mini[1]=a[1];
       maxi[n]=a[n];
       for(int i=2;i<=n;i++){
        mini[i]=min(mini[i-1],a[i]);
       }
       for(int i=n-1;i>=1;i--){
        maxi[i]=max(maxi[i+1],a[i]);
       }
       for(int i=1;i<=n;i++){
        pre[i]+=(pre[i-1]+a[i]);
       }
       int idx=0;
       for(int i=1;i<=n;i++){
        if(i<n){
            pre[i]+=max(0ll,maxi[i+1]-mini[i]);
        }
        if(pre[i]>=h){
            idx=i;
            break;
        }
       }
       cout<<idx+t<<endl;
   }
}
}

