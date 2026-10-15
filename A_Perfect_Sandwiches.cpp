#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        if(b>=a) cout<<-1<<endl;
        else if(a>=2*b) cout<<b<<endl;
        else cout<<a-b<<endl;
    }
}