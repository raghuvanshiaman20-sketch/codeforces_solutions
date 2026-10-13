#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int> a(n);
        vector<int> f(n+1);
        for(int i=0;i<n;i++){
            cin>>a[i];
            f[a[i]]++;
        }
        sort(a.begin(),a.end());
        int fl=0;
        for(int i=0;i<=n;i++){
            if(f[i]==0||(f[i]<(k*2-1))) break;
            else{
                if(f[i]%2==1&&f[i]<k*2){
                    fl=1;
                    break;
                }
            }
        }
        if(fl) cout<<"YES\n";
        else cout<<"NO\n";
    }
}