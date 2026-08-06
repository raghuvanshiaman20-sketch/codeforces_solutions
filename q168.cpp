#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int> a(n+2);
        for(int i=1;i<=n;i++){
            cin>>a[i];
        }
        int x;
        cin>>x;
        a[0]=a[n+1]=a[x];
        int cnt1=0,cnt2=0;
        for(int i=0;i<x;i++){
            if(a[i]!=a[i+1]){
                cnt1++;
            }
        }
        for(int i=x;i<=n;i++){
            if(a[i]!=a[i+1]){
                cnt2++;
            }
        }
        cout<<max(cnt1,cnt2)<<endl;
    }
}