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
        vector<long long> a(n),b(32);
        set<long long> st;
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        if(n==1){
            cout<<0<<endl;
            continue;
        }
        sort(a.begin(),a.end());
        long long val=1,j=0;
        for(int i=0;i<32;i++){
            for(int j=0;j<n;j++){
                if(a[j]&1<<i) b[i]++;
            }
        }
        long long maxi=0,s=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<32;j++){
                if(a[i]&1<<j) s+=(n-b[j])*(1<<j);
                else s+=(b[j])*(1<<j);
            }
            maxi=max(maxi,s);
            s=0;
        }
        cout<<maxi<<endl;
    }
}