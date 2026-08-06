#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        int n,a=0,b=0;
        cin>>n;
        cin>>s;
        int i=0;
        for(;i<n;i++){
            if(s[i]=='0'){
                a+=1;
            }
            else
            b+=1;
            
        }
        cout<<(b*(n-1)+a)<<endl;
    }
    return 0;
}