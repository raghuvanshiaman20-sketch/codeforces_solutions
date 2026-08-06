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
        int c=0,maxi=0;
        for(int i=0;i<n;i++){
            if(s[i]=='0'){
                c++;
            }
            else{
                if(c>maxi){
                    maxi=c;
                }
                c=0;
            }
            if(i==n-1){
                if(c>maxi){
                    maxi=c;
                }
            }
        }
         c=0;
        if((s[0]=='0')&&(s[n-1]=='0')){
            for(int i=0;i<n;i++){
                if(s[i]=='0'){
                    c++;
                    continue;
                }
                break;
            }
            for(int i=n-1;i>=0;i--){
                if(s[i]=='0'){
                    c++;
                    continue;
                }
                break;
            }
            if(c>maxi){
                maxi=c;
            }
        }
        cout<<maxi<<endl;
        
    }
}