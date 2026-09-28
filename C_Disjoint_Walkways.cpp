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
        long long b=s|t;
        long long w=1;
        while(b>0){
            if((b&1)==0) break;
            b>>=1;
            w<<=1;
        }
        long long x=s,y=t;
        long long u=1,v=1;
        while(x>0){
            if((x&1)==0) break;
            x>>=1;
            u<<=1;
        }
        while(y>0){
            if((y&1)==0) break;
            y>>=1;
            v<<=1;
        }
        if(w>n&&(u>n||v>n)) cout<<-1<<endl;
        else if(u>n||v>n) cout<<s+t+2*w<<endl;
        else if(w>n) cout<<s+t+2*(u+v)<<endl;
        else cout<<s+t+2*min(w,u+v)<<endl;
    }
}