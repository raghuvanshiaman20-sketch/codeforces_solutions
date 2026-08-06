#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int fl=0;
        for(int i=0;i<(n-1);i++){
            if(s[i]!=s[i+1]) fl++;
        }
        if(fl==1) cout<<2<<endl;
        else cout<<1<<endl;
    }
}