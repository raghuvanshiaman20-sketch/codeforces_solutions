#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        long long a,b,m;
        cin>>a>>b>>m;
        long long t=b/m*(m*(m-1)/2);
        long long f=b%m;
        t+=(f*(f+1)/2);
        t-=(a/m)*(m*(m-1))/2;
        long long s=a%m;
        t-=(s*(s+1)/2);
        cout<<t<<endl;
    }
}