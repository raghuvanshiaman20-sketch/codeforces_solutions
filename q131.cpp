#include<bits/stdc++.h>
using namespace std;
int isprime(int x){
    if(x==2){
        return 1;
    }
    if(x%2==0){
        return 0;
    }
    else{
        for(int i=3;i*i<=x;i+=2){
            if(x%i==0){
                return 0;
            }
        }
        return 1;
    }

}
int main(){
    int t;
    cin>>t;
    while(t--){
        int d;
        cin>>d;
        int p=1+d;
        while(1){
            if(isprime(p)){
                break;
            }
            p++;
        }
        int q=p+d;
        while(1){
            if(isprime(q)){
                break;
            }
            q++;
        }
        cout<<min(1ll*p*q,1ll*p*p*p)<<endl;
    }
}