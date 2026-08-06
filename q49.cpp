#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,c=0;
        cin>>n;
        string s;
        cin>>s;
        if(s[0]=='1'){
            c++;
        }
        for(int i=0;i<n-1;i++){
            if((s[i]=='0'&&s[i+1]=='1')||(s[i]=='1'&&s[i+1]=='0')){
                c++;
            }
        }
        cout<<c<<endl;
    }
}