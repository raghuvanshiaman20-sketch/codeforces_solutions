#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);  
    cin.tie(0);                     
    cout.tie(0); 
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        if(n==2){
            if(s[0]=='A') cout<<"Alice"<<endl;
            else cout<<"Bob"<<endl;
        }
        else{
            if(s[0]==s[n-1]||s[n-1]==s[n-2]){
                if(s[n-1]=='A') cout<<"Alice"<<endl;
                else cout<<"Bob"<<endl;
            }
            else{
                if(s[0]=='B'){
                    cout<<"Bob"<<endl;
                }
                else{
                    int f=0;
                    for(int i=0;i<(n-1);i++){
                        if(s[i]=='B'){
                            f=1;
                            break;
                        }
                    }
                    if(f) cout<<"Bob"<<endl;
                    else cout<<"Alice"<<endl;
                }
            }
        }
    }
}