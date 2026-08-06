#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n,x,y,s=0,sol=0;
        cin>>n>>x>>y;
        vector<long long> a(n),b(n);
        for(long long i=0;i<n;i++){
            cin>>a[i];
            b[i]=(a[i]/x)*y;
            sol+=b[i];
        }
        for(long long i=0;i<n;i++){
            s=max(s,sol+a[i]-b[i]);
        }
        cout<<s<<endl;
    }
}