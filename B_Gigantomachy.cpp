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
        vector<long long> a(n), b(m);
        for(int i=0;i<n;i++) cin>>a[i];
        for(int i=0;i<m;i++) cin>>b[i];
        long long ve=b[m-1],be=a[n-1];
        if(n>=2){
            for(int i=0;i<(n-1);i++){
                be+=a[i]-a[i+1]+1;
            }
        }
        if(m>=2){
            for(int i=0;i<(m-1);i++){
                ve+=b[i]-b[i+1]+1;
            }
        } 
        if(be>=ve) cout<<1<<endl;
        else cout<<2<<endl; 
    }
}