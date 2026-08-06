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
        int cnt=1,fl=0,u=0;
        for(int i=1;i<n-1;i++){
            if(s[i]==s[i-1]) continue;
            if(s[i]!=s[i-1]&&s[i]!=s[i+1]&&s[i-1]==s[i+1]&&fl==0) fl=1;
            if(s[i]!=s[i-1]&&s[i]!=s[i+1]) {
                u=1;
            }
            if(s[i]!=s[i-1]) cnt++;
        }
        if(s[n-1]!=s[n-2]){
            cnt++;
        }
        if(fl==1) cout<<cnt-2<<endl;
        else if(u==1) cout<<cnt-1<<endl;
        else cout<<cnt<<endl;
    }
}