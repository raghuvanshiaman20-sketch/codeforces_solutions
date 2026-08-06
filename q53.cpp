#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        vector<long long> a(n);
        for(long long i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a.begin(),a.end());
        vector<long long> b(n/2);
        for(int i=0,j=0;i<n/2;i++,j+=2){
            b[i]=abs(a[j]-a[j+1]);
        }
        sort(b.begin(),b.end());
        cout<<b[n/2-1]<<endl;
    }
}