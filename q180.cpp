#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int n = s.length();
        if(n<=3) cout<<"YES"<<endl;
        else{
            int cnt=0;
            for(int i=1;i<n;i++){
                if(s[i]!=s[i-1]){
                    cnt++;
                }
            }
            if(cnt>=n-3){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
    }
}