#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n;
        ll k;
        cin>>n>>k;
        vector<ll> q(n+1),r(n+1),fl(n+1);
        for(int i=1;i<=n;i++) cin>>q[i];
        for(int i=1;i<=n;i++) cin>>r[i];
        sort(q.begin(),q.end());
        sort(r.begin(),r.end());
        int cnt=0;
        for(int i=1;i<=n;i++){
            int ans=-1;
            int h=n,l=1;
            if(r[i]>k) continue;
            ll diff=k-r[i];
            while(h>=l){
                ll m=l+(h-l)/2;
                if(diff/q[m]>r[i]){
                    ans=m;
                    l=m+1;
                }
                else{
                    h=m-1;
                }
            }
            if(ans!=-1){
                fl[ans]++;
            }
        }
        ll av=0;
        for(int i=1;i<=n;i++){
            av++;
            ll el=min(av,fl[i]);
            av-=el;
            cnt+=el;
        }
        cout<<cnt<<endl;
    }
}