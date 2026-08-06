#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n,a,b;
        cin>>n>>a>>b;
        if(a*3<=b){
            cout<<n*a<<endl;        
        }
        else{
            long long c=n/3,cost=0,d=n%3;
            cost+=b*c;
            if(a*d<=b){
                cost+=a*d;
            }
            else cost+=b;
            cout<<cost<<endl;
        }
    }
}