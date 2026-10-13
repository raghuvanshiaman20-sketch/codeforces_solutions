#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n,l,r;
        cin>>n>>l>>r;
        vector<long long> a(n+1);
        for(int i=0;i<=n;i++) a[i]=i+1;
        a[r]=a[l-1];
        for(int i=1;i<=n;i++) cout<<(a[i]^a[i-1])<<" ";
        cout<<endl;
    }
}