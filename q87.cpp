#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,f=0;
        cin>>n;
        string s;
        cin>>s;
        for(int i=0;i<(n/2);i++){
            int d=abs(s[i]-s[n-i-1]);
            if((s[i]!=s[n-i-1])&&d!=2){
                f=1;
                break;
            }
        }
        if(f){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
    }
}