#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll m=998244353;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n1,n2;
        cin>>n1>>n2;
        string p,q;
        cin>>p>>q;
        vector<int> a(26),b(26);
        for(int i=0;i<n1;i++) a[p[i]-'a']++;
        for(int i=0;i<n2;i++) b[q[i]-'a']++;
        int fl=0;
        for(int i=0;i<26;i++){
            if(i==8||i==18||i==23){
                if((a[i]-b[i])!=1) fl=1;
            }
            else{
                if((a[i]-b[i])!=0) fl=1;
            }
        }
        if(fl) cout<<"NO\n";
        else cout<<"YES\n";
    }
}