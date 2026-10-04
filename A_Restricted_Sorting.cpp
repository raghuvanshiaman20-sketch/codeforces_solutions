#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<long long> a(n+1),b(n+1);
        for(int i=1;i<=n;i++){
            cin>>a[i];
            b[i]=a[i];
        }
        sort(b.begin(),b.end());
        int fl=0;
        for(int i=1;i<=n;i++){
            if(a[i]!=b[i]){
                fl=1;
                break;
            }
        }
        if(fl==0) cout<<-1<<endl;
        else{
            long long mn=b[1],mx=b[n];
            long long k=LONG_LONG_MAX;
            for(int i=1;i<=n;i++){
                if(a[i]!=b[i]){
                    k=min(k,max(a[i]-mn,mx-a[i]));
                }
            }
            cout<<k<<endl;
        }
    }
}