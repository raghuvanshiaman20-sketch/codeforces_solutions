#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long s,k,m;
        cin>>s>>k>>m;
        if(s<=k){
            m%=k;
            if(s<=m){
                cout<<0<<endl;
            }
            else{
                cout<<s-m<<endl;
            }
        }
        else{
            m%=2*k;
            if(m<k){
                cout<<s-m<<endl;
            }
            else{
                cout<<k-(m-k)<<endl;
            }
        }
    }
}