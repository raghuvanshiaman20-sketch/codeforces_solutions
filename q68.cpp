#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        int y=0,n=0;
        cin>>s;
        for( int i=0;s[i]!='\0';i++){
            if(s[i]=='Y'){
                y++;
            }
            else{
                n++;
            }
        }
        int c=0;
        if(y>1){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }

    }
    return 0;
}