#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n,m,a,b;
        cin>>n>>m>>a>>b;
        if(a==1&&b==1){
            cout<<"YES\n";
            continue;
        }
        if(n%a==0||m%b==0||a%n==0||b%m==0){
            cout<<"NO\n";
            continue;
        }
        if(n>a*2||m>b*2) cout<<"NO\n";
        else cout<<"YES\n";
    }
}