#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        vector<int> a(26);
        for(int i=0;i<n;i++){
            string w;
            cin>>w;
            a[w[0]-'a']++;
        }
        int fl=0;
        for(int i=0;i<m;i++){
            string w;
            cin>>w;
            for(auto it:w){
                if(a[it-'A']==0) fl=1;
            }
        }
        if(fl) cout<<"NO\n";
        else cout<<"YES\n";
    }
}