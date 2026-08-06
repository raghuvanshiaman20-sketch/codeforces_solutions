#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int n=s.size(),a=0,b=0,f=0;
        for(int i=0;i<(n-1);i++){
            if(s[i]=='b'&&s[i+1]=='b') b++;
            if(s[i]=='a'&&s[i+1]=='a') a++;
            if(b==2||a==2){
                if((s[i+1]==s[i])&&(s[i]==s[i-1])){
                    f=1;
                }
            }  
        }
        if(b>2||a>2) cout<<"NO"<<endl;
        else if((b==2&&a==0&&f==1)||(a==2&&b==0&&f==1)) cout<<"YES"<<endl;
        else if((b==1&&a==0)||(b==0&&a==1)||(b==0&&a==0)||(b==1&&a==1)) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}