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
        vector<long long> f(n+1),ans(n+1);
        for(int i=1;i<=n;i++){
            cin>>f[i];
        }
        for(int i=2;i<n;i++){
            ans[i]=(f[i-1]+f[i+1]-2*f[i])/2;
        }
        long long s1=0,s2=0;
        for(int i=2;i<n;i++) s1+=(i-1)*ans[i];
        ans[n]=(f[1]-s1)/(n-1);
        for(int i=2;i<n;i++) s2+=(n-i)*ans[i];
        ans[1]=(f[n]-s2)/(n-1);
        for(int i=1;i<=n;i++) cout<<ans[i]<<" ";
        cout<<endl;
    }
}