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
        string s;
        cin>>s;
        int fl=1,ans=0;
        for(int i=1;i<=n/k;i++){
            for(int j=1;j<=k;j++){
                if(s[(i-1)*k+j-1]=='0') fl=0;
            }
            if(fl) ans++;
            fl=1;
        }
        cout<<ans<<endl;
    }
}