#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,f=0,t=0;
        cin>>n;
        string s;
        cin>>s;
        for(int i=0;i<(n-3);i++){
            if((s[i]=='2')&&(s[i+1]=='0')&&(s[i+2]=='2')&&(s[i+3]=='6')){
                t=1;
            }
            if((s[i]=='2')&&(s[i+1]=='0')&&(s[i+2]=='2')&&(s[i+3]=='5')){
                f=1;
            }
        }
        if(t==1){
            cout<<0<<endl;
        }
        else{
            if(f==0){
                cout<<0<<endl;
            }
            else{
                cout<<1<<endl;
            }
        }
    }
}