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
        vector<int> a(n+1);
        for(int i=1;i<=n;i++){
            cin>>a[i];
        }
        if(a[n]==1) cout<<"No\n";
        else{
            int fl=0;
            vector<int> pre(n+1),suf(n+1);
            pre[1]=a[1];
            suf[n]=a[n];
            for(int i=2;i<=n;i++){
                pre[i]=min(a[i],pre[i-1]);
            }
            for(int i=n-1;i>=1;i--){
                suf[i]=max(a[i],suf[i+1]);
            }
            for(int i=1;i<n;i++){
                if(pre[i]>suf[i+1]){
                    fl=1;
                    break;
                }
            }
            if(fl) cout<<"No\n";
            else cout<<"Yes\n";
        }
    }
}