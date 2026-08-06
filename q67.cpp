#include<bits/stdc++.h>
using namespace std;
long long gcd(long long a,long long b)
{ if(b==0){
    return a;
} 
return gcd(b,a%b);}
int main(){
    int t;
    cin>>t;
    while(t--){
        long long a,b,k;
        cin>>a>>b>>k;
        long long t= gcd(a,b);
        if((a/t<=k)&&(b/t<=k)){
            cout<<1<<endl;
        }
        else{
            cout<<2<<endl;
        }
    }
    return 0;
}