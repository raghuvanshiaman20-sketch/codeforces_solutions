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
        int n;
        cin>>n;
        vector<ll> a(n);
        for(int i=0;i<n;i++) cin>>a[i];
        sort(a.begin(),a.end());
        vector<ll> b(n);
        b[0]=a[0];
        int j=n-1,k=1;
        for(int i=1;i<n;i++){
            if(b[i]!=0) break;
            if(b[i-1]<a[k]){
                b[i]=a[k];
                k++;
            }
            else{
                b[j]=a[k];
                j--;
                i--;
                k++;
            }
        }
        vector<int> c(n);
        c[0]=1;
        c[n-1]=1;
        for(int i=1;i<n;i++){
            if(b[i]>b[i-1]){
                c[i]=1;
            }
        }
        for(int i=n-2;i>=0;i--){
            if(b[i]>b[i+1]) c[i]=1;
        }
        int ans=0;
        for(int i=0;i<n;i++){
            if(c[i]) ans++;
        }
        cout<<ans<<endl;
        for(int i=0;i<n;i++) cout<<b[i]<<" ";
        cout<<endl;
    }
}