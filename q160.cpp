#include <bits/stdc++.h>
using namespace std;
const long long m=1e9+7;
const int maxi=1e6;
int a,b;
long long fac[maxi+1];
long long inv[maxi+1];
int sod(int var){
    int l=0;
    while(var>0){
        int dig=var%10;
        if(dig!=a&&dig!=b) return -1;
        l+=dig;
        var/=10;
    }
    return l;
}
long long exp(long long x,long long n,long long m){
    x%=m;
    long long res=1;
    while(n>0){
        if(n%2==1){
            res=res*x%m;
        }
        x=x*x%m;
        n/=2;
    }
    return res;
}
void factorial(){
    fac[0]=1;
    for(int i=1;i<=maxi;i++){ fac[i]=fac[i-1]*i%m;}
}
void inverse(){
    inv[maxi]=exp(fac[maxi],m-2,m);
    for(int i=maxi;i>=1;i--){ inv[i-1]=inv[i]*i%m;}
}
long long comp(int n,int i){
    return fac[n]*inv[i]%m*inv[n-i]%m;
}
int good(int x){
    while(x>0){
        int dig=x%10;
        if(dig!=a&&dig!=b) return 0;
        x/=10;
    }
    return 1;
}
int main(){
    int n;
    cin>>a>>b>>n;
    factorial();
    inverse();
    long long fin=0;
    for(int i=0;i<=n;i++){
        int sum =a*(n-i)+b*i;
        if(good(sum)){
            fin=(fin+comp(n,i))%m;
        }
    }
    cout<<fin<<endl;
}
