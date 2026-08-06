#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int l=s.length();
        int n2=0,t13=0,c13=0,vl=0;
        for(int i=0;i<l;i++){
            if(s[i]=='1'||s[i]=='3') t13++;
        }
        vl=t13;
        for(int i=0;i<l;i++){
            if(s[i]=='2'){
                n2++;
            }
            else if(s[i]=='1'||s[i]=='3') { c13++; }
            int r13=t13-c13;
            vl=max(r13+n2,vl);
        }
        cout<<l-vl<<endl;
    }
}