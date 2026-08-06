#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        string nu="";
        int fl1=0,fl2=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='0'&&fl1==0){
                fl1=1;
                continue;
            }
            else if(s[i]=='1'&&fl2==0){
                fl2=1;
                continue;
            }
            else nu+=s[i];
        }
        cout<<nu<<endl;
    }
}