#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int y=0,n=0;
        for(int i=0;s[i]!='\0';i++){
            if(s[i]=='Y'){
                y++;
            }
            if(s[i]=='N'){
                n++;
            }
        }
        if(y>=n){
            cout<<"NO"<<endl;
        }
        else
        cout<<"YES"<<endl;
    }
}