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
        s='1'+s+'1';
        int c=0;
        for(int i=1,l=0;i<=n;i++){
            if(s[i]=='0'){
                if(s[i-1]=='1'){
                    l=i;
                }
                if(s[i+1]=='1'){
                    int a=(i==n)+(l==1);
                    c+=(i-l+1+a)/3;
                }
            }
            else{
                c++;
            }
        }
        cout<<c<<endl;
    }
}