#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int n=0,c=0;
        for(int i=0;s[i]!='\0';i++){
            n++;
        }
        for(int i=0;i<n-1;i++){
            if(s[i]==s[i+1]){
                c=1;
                break;
            }
        }
        if(c==1){
            cout<<1<<endl;
        }
        else{
            cout<<n<<endl;
        }
    }
}