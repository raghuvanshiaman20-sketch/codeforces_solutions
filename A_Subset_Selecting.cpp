#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int> cnt(n+1);
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            cnt[x]++;
        }
        int ans=0,l=0;
        for(int i=0;i<=n;i++){
            if(cnt[i]+l>=k&&cnt[i]!=0){
                ans++;
                l+=cnt[i];
                l-=k;
            }
            else break;
        }
        cout<<ans<<endl;
    }
}