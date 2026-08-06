#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long t,h,u;
        cin>>t>>h>>u;
        long long ans=(h+u)*3;
        long long x=min(u,t);
        ans+=x;
        if(x==t){
            cout<<ans<<endl;
        }
        else{
            t-=x;
            if(t<=2*h){
                ans+=(2*t);
            }
            else{
                t-=2*h;
                ans+=4*h;
                ans+=(2*t+1);
            }
            cout<<ans<<endl;
        }
    }
}