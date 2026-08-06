#include <bits/stdc++.h>
using namespace std;
const long long mod=998244353;
long long power(long long num,long long x){
    long long r=1;
    num%=mod;
    while(x>0){
       if(x&1) r=r*num%mod;
       x=x>>1;
       num=num*num%mod;
    }
    return r;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        long long n,m,r,c;
        cin>>n>>m>>r>>c;
        long long com=n*m-(n-r+1)*(m-c+1);
        cout<<power(2,com)<<endl;
    }
}