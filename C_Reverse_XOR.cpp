#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        vector<int> v(32);
        int i=0,cnt_1=0;
        while(n>0){
            if(n&1){
                v[i]=1;
                cnt_1++;
            }
            else v[i]=0;
            i++;
            n>>=1;
        }
        if(cnt_1%2==1){
            cout<<"NO\n";
            continue;
        }
        string s="";
        int fl=0;
        for(int j=0;j<i;j++){
            if(v[j]==1) fl=1;
            if(fl){
                if(v[j]) s+='1';
                else s+='0';
            }
        }
        int fl2=0;
        for(int j=0;j<s.size()/2;j++){
            if(s[j]!=s[s.size()-j-1]) fl2=1;
        }
        if(s.size()%2==1){
            if(s[s.size()/2]=='1') fl2=1;
        }
        if(fl2) cout<<"NO\n";
        else cout<<"YES\n";
    }
}