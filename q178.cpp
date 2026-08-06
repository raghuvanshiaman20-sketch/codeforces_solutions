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
        int o=0,e=0;
        for(int i=0;i<n;i++){
            if(s[i]=='(') o++;
            else e++;
        }
        if(o!=e){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
    }
}