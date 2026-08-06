#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        int n,a,b,f=0;
        int x=0,y=0;
        cin>>n>>a>>b;
        cin>>s;
        for(int i=0;i<100*n;i++){
            if((a==x)&&(b==y)){
                cout<<"YES"<<endl;
                f=1;
                break;
            }
            if(s[i%n]=='N'){
                y++;
            }
            else if(s[i%n]=='S'){
                y--;
            }
            else if(s[i%n]=='E'){
                x++;
            }
            else{
                x--;
            }
        }
        if(f==0){
        cout<<"NO\n";
        }
    }
   
    }
