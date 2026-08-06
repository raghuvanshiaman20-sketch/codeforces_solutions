#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        int cnt_0=0,cnt_1=0;
        for(int i=0;i<n;i++){
            if(s[i]=='0') cnt_0++;
            else cnt_1++;
        }
        if(cnt_1<=k||cnt_1==0){
            cout<<"Alice"<<endl;
            continue;
        }
        if(n<=2*k-1) cout<<"Alice"<<endl;
        else cout<<"Bob"<<endl;
    }
}