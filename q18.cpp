#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        string a,b,c,r="",e="";
        cin>>n;
        cin>>a;
        cin>>m;
        cin>>b;
        cin>>c;
        for(int j=m-1;j>=0;j--){
            if(c[j]=='V'){
                e+=b[j];
            }
        }
        for(int k=0;k<m;k++){
            if(c[k]=='D'){
                r+=b[k];
            }
        }
        cout<<e+a+r<<endl;
    }
}