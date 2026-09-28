#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long n,q;
    cin>>n>>q;
    while(q--){
        long long s,t;
        cin>>s>>t;
        if(s==t){
            cout<<0<<endl;
            continue;
        }
        if((s&t)==0){
            cout<<s+t<<endl;
            continue;
        }
        long long b=max(s,t);
        if(__builtin_popcount(b+1)==1){
            if(b+1<=n) cout<<s+t+2*b<<endl;
            else cout<<-1<<endl;
        }
        else{
            cout<<s+t+2*(s^t)<<endl;
        }
    }
}