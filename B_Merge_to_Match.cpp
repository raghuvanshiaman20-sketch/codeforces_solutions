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
        vector<long long> a(n),b(m);
        for(int i=0;i<n;i++) cin>>a[i];
        for(int i=0;i<m;i++) cin>>b[i];
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        if(m*2>n||a[n-1]<b[m-1]||a[0]>b[0]) cout<<"NO\n";
        else{
            int i=n-1,fl=0;
            for(int j=m-1;j>=0;j--){
                if(b[j]>a[i]) {
                    fl=1;
                    break;
                }
                i--;
            }
            i=0;
            for(int j=0;j<m;j++){
                if(b[j]<a[i]){
                    fl=1;
                    break;
                }
                i++;
            }
            if(fl) cout<<"NO\n";
            else cout<<"YES\n";
        }
    }
}