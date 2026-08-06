#include <bits/stdc++.h>
using namespace std;
long long mod=1e9+7;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,a,r,m;
    cin>>n>>a>>r>>m;
    vector<long long> v(n+1),pre(n+1);
    for(int i=1;i<=n;i++) cin>>v[i];
    long long op=min(m,a+r);
    sort(v.begin(),v.end());
    long long s=0;
    for(int i=1;i<=n;i++){
        s+=v[i];
        pre[i]=v[i]+pre[i-1];
    }
    long long c=INFINITY;
    for(int i=1;i<=n;i++){
        if(i!=n-1){
            if(v[i]==v[i+1]) continue;
        }
        long long el1=v[i]*i-pre[i],el2=s-pre[i]-v[i]*(n-i);
        if(el1>=el2) c=min(c,a*(el1-el2)+op*el2);
        else c=min(c,r*(el2-el1)+op*el1);
    }
    if(s%n==0){
        long long m=s/n;
        int idx=upper_bound(v.begin(),v.end(),m)-v.begin();
        idx--;
        long long el1=m*idx-pre[idx],el2=s-pre[idx]-m*(n-idx);
        if(el1>=el2) c=min(c,a*(el1-el2)+op*el2);
        else c=min(c,r*(el2-el1)+op*el1);
    }
    else{
        long long m=s/n;
        int idx=upper_bound(v.begin(),v.end(),m)-v.begin();
        idx--;
        long long el1=m*idx-pre[idx],el2=s-pre[idx]-m*(n-idx);
        if(el1>=el2) c=min(c,a*(el1-el2)+op*el2);
        else c=min(c,r*(el2-el1)+op*el1);
        m++;
        idx=upper_bound(v.begin(),v.end(),m)-v.begin();
        idx--;
        el1=m*idx-pre[idx],el2=s-pre[idx]-m*(n-idx);
        if(el1>=el2) c=min(c,a*(el1-el2)+op*el2);
        else c=min(c,r*(el2-el1)+op*el1);
    }
    cout<<c<<endl;
}
