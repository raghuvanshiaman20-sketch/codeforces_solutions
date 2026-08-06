#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long a,b,n,c=0;
        cin>>a>>b>>n;
        if((n*b<=a)||(b==a)){
            cout<<1<<endl;
        }
        else{
        cout<<2<<endl;
        }
    }
}