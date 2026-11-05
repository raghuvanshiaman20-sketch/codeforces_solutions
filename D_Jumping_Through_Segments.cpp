#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll m=998244353;
vector<pair<ll,ll>> v(200001);
bool f(ll m,vector<pair<ll,ll>>& v,int n){
    ll max_reach=0,min_reach=0;
    for(int i=0;i<n;i++){
        max_reach=min(max_reach+m,v[i].second);
        min_reach=max(min_reach-m,v[i].first);
        ll reach_st=max(min_reach,v[i].first);
        ll reach_en=min(max_reach,v[i].second);
        if(reach_st>reach_en) return false;
    }
    return true;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        v.resize(n);
        ll maxi=0;
        for(int i=0;i<n;i++){
            cin>>v[i].first>>v[i].second;
            maxi=max(maxi,v[i].second);
        }
        ll l=0,hi=maxi;
        while(l<hi){
            ll m=l+(hi-l)/2;
            if(f(m,v,n)){
                hi=m;
            }
            else{
                l=m+1;
            }
        }
        cout<<l<<endl;
    }
}