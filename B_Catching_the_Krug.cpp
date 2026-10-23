#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        ll n,rk,ck,rd,cd;
        cin>>n>>rk>>ck>>rd>>cd;
        ll el1=0,el2=0;
        if(rk>rd){
            el1=n-rd;
        }
        else if(rk==rd){
            el1=0;
        }
        else{
            el1=rd;
        }
        if(ck>cd){
            el2=n-cd;
        }
        else if(ck==cd) el2=0;
        else{
            el2=cd;
        }
        cout<<max(el1,el2)<<endl;
    }
}