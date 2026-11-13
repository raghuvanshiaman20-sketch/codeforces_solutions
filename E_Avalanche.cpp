#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
            a[i]%=2;
        }
        int cur=0,pa=0;
        for(int i=n-1;i>=0;i--){
            a[i]+=cur;
            pa+=(a[i]%2);
            cur+=(a[i]%2);
            if(i+k<n) cur-=(a[i+k]%2);
        }
        pa=pa%2;
        cout<<(pa?"Alice\n":"Bob\n");
    }
}