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
        vector<long long> a(n+1);
        for(int i=1;i<=n;i++) cin>>a[i];
        map<long long,long long> mp1,mp2;
        long long ans=0;
        for(int i=1;i<=n-4;i++){
            mp2[i]=a[i]+a[i+2]-a[i+4];
            mp1[mp2[i]]++;
        }
        for(int i=1;i<=n-4;i++){
            long long cnt=0;
            if(mp2[i]==mp2[i+2]&&i+6<=n){
                cnt++;
            }
            if(mp2[i]==mp2[i+4]&&i+8<=n){
                cnt++;
            }
            ans+=mp1[mp2[i]]-cnt-1;
            mp1[mp2[i]]--;
        } 
        
        cout<<ans<<endl;
    }
}