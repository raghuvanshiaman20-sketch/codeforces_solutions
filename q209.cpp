#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<long long> a(n),b(n);
        long long y;
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(i+1==k){
                y=a[i];
            }
        }
        long long total=0;
        int f=0;
        sort(a.begin(),a.end());
        for(int i=0;i<(n-1);i++){
            if(a[i]>=y){
                total+=(a[i+1]-a[i]);
                b[i]=total-1;
            }
            else{
                b[i]=0;
            }
            if(b[i]>=a[i]){
                f=1;
            }
        }
        if(f){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
    }
}