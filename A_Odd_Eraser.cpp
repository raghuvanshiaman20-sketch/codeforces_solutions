#include <bits/stdc++.h>
using namespace std;
bitset<1000005> dp;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<long long> a(n);
        for(int i=0;i<n;i++) cin>>a[i];
        cout<<__gcd(a[0],a[n-1])<<endl;
    }
}