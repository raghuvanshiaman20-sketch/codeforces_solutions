#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int o=1,so=0,sc=0;
        s[0]='(';
        for(int i=1;i<n;i++){
           if(i%2==0){
            if(o>0){
                s[i]=')';
                o--;
            }
            else{
                s[i]='(';
                o++;
            }
           }else{
            if(s[i]=='('){
                o++;
            }
            else{
                o--;
            }
           }
            
        }
    
        for(int i=0;i<n;i++){
            if(s[i]==')') sc+=(i+1);
            else so+=(i+1);
        }
        cout<<sc-so<<endl;
    }
}
