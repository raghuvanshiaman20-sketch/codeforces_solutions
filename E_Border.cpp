#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long n,k;
    cin>>n>>k;
    vector<long long> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    long long g=0;
    for(int i=0;i<n;i++){
        g=__gcd(g,a[i]);
    }
    vector<int> h(k,0);
    for(long long i=0,s=0;i<k;i++,s+=g){
        h[s%k]=1;
    }
    int cnt=0;
    for(int i=0;i<k;i++){
        if(h[i]==1) cnt++;
    }
    cout<<cnt<<endl;
    for(int i=0;i<k;i++){
        if(h[i]==1) cout<<i<<" ";
    }
    cout<<endl;
}