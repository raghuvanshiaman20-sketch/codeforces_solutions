#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n,k;
        cin>>n>>k;
     if(n>1){
        array<long long,200000> a;
        a.fill(0);
        long long t=1;
        while(t<=k){
            t=t<<1;
        }
        a[0]=(t>>1)-1;
        a[1]=k-a[0];
        for(int i=0;i<n;i++){
            cout<<a[i]<<" ";
        }
        cout<<endl;
    }
    else{
        cout<<k<<endl;
    }
    }
}