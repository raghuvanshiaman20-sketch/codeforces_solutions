#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long s,k,m;
        cin>>s>>k>>m;
    if(m>k){
        long long x=m%k;
        if(x>s){
            cout<<0<<endl;
        }
        else if(x==s) {
            cout<<x<<endl;
        }
        else{
            if(x!=0){
                cout<<x<<endl;
            }
            else{
                cout<<k<<endl;
            }
        }
    }
    else if(m<k){
        if(m>=s){
            cout<<0<<endl;
        }
        else{
            cout<<s-m<<endl;
        }
    }
    else{
        if(s>=k){
            cout<<k<<endl;
        }
        else{
            cout<<s<<endl;
        }
    }
    }
}