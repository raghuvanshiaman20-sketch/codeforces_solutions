#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n,x,y;
        cin>>n>>x>>y;
        vector<int> a(n+1);
        for(int i=1;i<=n;i++) cin>>a[i];
        int h=__gcd(x,y);
        int fl=0;
        for(int i=1;i<=n;i++){
            if(abs(a[i]-i)%h!=0){
                fl=1;
                break;
            }
        }
        if(fl) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
}