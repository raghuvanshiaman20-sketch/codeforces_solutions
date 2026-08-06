#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<long long> a(n+1);
        for(int i=1;i<=n;i++){
            cin>>a[i];
        }
        long long stan=2*a[1]-1;
        int fl=0;
        for(int i=2;i<=n;i++){
            if(a[i]>stan){
                fl=1;
                break;
            }
            stan=min(stan,2*a[i]-1);
        }
        if(fl) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
}