#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        vector<int> p(n+1);
        for(int i=0;i<n;i++){
            if(s[i]=='1') p[i+1]=i+1;
        }
        int fl=0;
        for(int i=1;i<n-1;i++){
            if(s[i]=='0'&&s[i+1]=='1'&&s[i-1]=='1') fl=1;
        }
        if(s[0]=='0'&&s[1]=='1'||s[n-2]=='1'&&s[n-1]=='0') fl=1;
        if(fl) cout<<"NO\n";
        else{
            cout<<"YES\n";
            int st=0;
            for(int i=0;i<n-1;i++){
                if(s[i]=='0'&&s[i+1]=='0'){
                    if(st==0) st=i+1;
                    p[i+1]=i+2;
                }
                if(s[i]=='0'&&s[i+1]=='1'){
                    p[i+1]=st;
                    st=0;
                }
            }
            if(s[n-1]=='0') p[n]=st;
            for(int i=1;i<=n;i++) cout<<p[i]<<" ";
            cout<<endl;
        }
    }
}