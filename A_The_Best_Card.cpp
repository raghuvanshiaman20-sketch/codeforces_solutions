#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int el=n;
        if(n%2==0) el=n+1;
        else{
            cout<<"NO\n";
            continue;
        }
        int fl=0;
        for(int i=2;(i*i)<=el;i++){
            if(el%i==0){
                fl=1;
                break;
            }
        }
        if(fl) cout<<"NO\n";
        else cout<<"YES\n";
    }
}