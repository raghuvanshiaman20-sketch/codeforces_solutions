#include <bits/stdc++.h>
using namespace std;
long long mod=1e9+7;
const int MAXN=1e6;
long long fac[MAXN+1],inv[MAXN+1];
long long exp(long long x,long long n,long long m){
    x%=m;
    long long res=1;
    while(n>0){
        if(n%2==1){ res=res*x%m;}
        n/=2;
        x=x*x%m;
    }
    return res;
}
void factorial(long long p){
    fac[0]=1;
    for(int i=1;i<=MAXN;i++) fac[i]=fac[i-1]*i%p;
}
void inverse(long long p){
    inv[MAXN]=exp(fac[MAXN],p-2,p);
    for(int i=MAXN;i>=1;i--){ inv[i-1]=inv[i]*i%p;}
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    factorial(mod);
    inverse(mod);
    int n,m;
    cin>>n>>m;
    long long sol=fac[n+2*m-1]*inv[n-1]%mod*inv[2*m]%mod;
    cout<<sol<<endl;
}