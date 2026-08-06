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
        vector<long long> a(n),pre(n),suf(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        } 
        pre[0]=a[0];
        for(int i=1;i<(n-1);i++) pre[i]=abs(a[i])+pre[i-1];
        suf[n-1]=-a[n-1];
        for(int i=n-2;i>0;i--) suf[i]=-a[i]+suf[i+1];
        long long total=suf[1];
        for(int i=1;i<(n-1);i++){
            total=max(total,pre[i-1]+suf[i+1]);
        }
        cout<<max(total,pre[n-2])<<endl;
    }
}