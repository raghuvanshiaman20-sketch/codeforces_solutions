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
        int n;
        cin>>n;
        string s;
        cin>>s;
        int sw=0;
        char c='R';
        for(int i=0;i<n;i++){
            if(s[i]!=c){
                sw++;
            }
            if(s[i]=='R') c='B';
            if(s[i]=='B') c='R';
        }
        cout<<sw<<endl;
    }
}