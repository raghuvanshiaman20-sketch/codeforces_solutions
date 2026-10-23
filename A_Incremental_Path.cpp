#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        string s;
        cin>>s;
        vector<ll> a(m);
        for(int i=0;i<m;i++) cin>>a[i];
        int i=0;
        ll p=1;
        set<ll> st;
        for(auto it:a) st.emplace(it);
        for(int j=0;j<n;j++){
            if(s[j]=='A'){
                p++;
                st.emplace(p);
            }
            else{
                p++;
                while(a[i]<p&&i<m) i++;
                while(a[i]==p&&i<m){
                    p++;
                    i++;
                }
                st.emplace(p);
                p++;
                while(a[i]==p&&i<m){
                    p++;
                    i++;
                }
            }
        }
        cout<<st.size()<<endl;
        for(auto it:st) cout<<it<<" ";
        cout<<endl;
    }
}