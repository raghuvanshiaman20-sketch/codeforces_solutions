#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll m=998244353;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        int s=a+b+c;
        if(s%3==0){
            s/=3;
            if(s==a&&abs(b-c)==2) cout<<"YES\n";
            else if(s==b&&abs(a-c)==2)  cout<<"YES\n";
            else if(s==c&&abs(a-b)==2) cout<<"YES\n";
            else cout<<"NO\n";
        }
        else cout<<"NO\n";
    }
}