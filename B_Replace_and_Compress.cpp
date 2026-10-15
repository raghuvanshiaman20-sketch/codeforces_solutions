#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int fl1=0,fl2=0;
        for(int i=1;i+1<(int)s.size();i++) {
            if(s[i-1]==s[i+1]){
                if(s[i]==s[i-1]) fl1=1;
                else fl2=1;
            }
        }
        cout<<1+fl1+fl2<<endl;
    }
}