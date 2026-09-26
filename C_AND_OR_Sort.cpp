#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int op=0;
        if(s[0]=='1'){
            for(int i=1;i<n;i++) if(s[i]=='0') op++;
        }
        else{
            op=INT_MAX;
            vector<int> c1(n+1),c0(n+1);
            for(int i=1;i<n;i++){
                c1[i]=c1[i-1];
                if(s[i]=='1') c1[i]++;
            }
            for(int i=n-1;i>=0;i--){
                c0[i]=c0[i+1];
                if(s[i]=='0') c0[i]++;
            }
            for(int i=0;i<n;i++){
                op=min(op,c1[i]+c0[i+1]);
            }
        }
        cout<<op<<endl;
    }
}