#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        int cnt=a;
        int l=a-1;
        int xo;
        if(l%4==0){
            xo=l;
        }
        else if(l%4==1){
            xo=1;
        }
        else if(l%4==2){
            xo=l+1;
        }
        else{
            xo=0;
        }
        if(xo==b){
            cout<<cnt<<endl;
        }
        else{
            if((xo^b)!=a){
                cout<<cnt+1<<endl;
            }
            else{
                cout<<cnt+2<<endl;
            }
        }
    }
}