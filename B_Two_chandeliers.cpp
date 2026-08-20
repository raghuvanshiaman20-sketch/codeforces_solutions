#include <bits/stdc++.h>
using namespace std;
long long exgcd(long long a, long long b,long long &x,long long &y){
    if(b==0){
        x=1,y=0;
        return a;
    }
    long long x1,y1;
    long long d=exgcd(b,a%b,x1,y1);
    x=y1;
    y=x1-y1*(a/b);
    return d;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long n,m,k;
    cin>>n>>m>>k;
    vector<long long> a(2*max(n,m)+1,-1),b(2*max(n,m)+1,-1);
    for(int i=1;i<=n;i++){
        int x;
        cin>>x;
        a[x]=i;
    }
    for(int i=1;i<=m;i++){
        int x;
        cin>>x;
        b[x]=i;
    }
    long long g=__gcd(n,m);
    long long l=(n/g)*m;
    long long dx,dy;
    exgcd(n/g,m/g,dx,dy);
    long long modb=m/g;
    dx%=modb;
    if(dx<0) dx+=modb;
    vector<long long> matchResidues;
    for(int i=1;i<=2*max(n,m);i++){
        if(a[i]!=-1&&b[i]!=-1){
            // computes position via crt
            long long x=a[i]-1;
            long long y=b[i]-1;
            long long diff=y-x;
            if(diff%g!=0) continue;
            long long diffg=diff/g;
            long long t_b=(dx*(diffg%modb))%modb;
            long long t=t_b;
            t%=modb;
            if(t<0) t+=modb;
            long long r_big=x+n*t;
            r_big%=l;
            if(r_big<0) r_big+=l;
            matchResidues.push_back(r_big);
        }
    }
    sort(matchResidues.begin(),matchResidues.end());
    long long c=matchResidues.size();
    auto matchesupto=[&](long long i) -> long long{
        long long full=i/l;
        long long rem= i%l;
        long long res=full*c;
        if(rem>0){
            long long c2=upper_bound(matchResidues.begin(),matchResidues.end(),rem-1)-matchResidues.begin();
            res+=c2;
        }
        return res;
    };
    auto mismatch=[&](long long i) -> long long{
        return i-matchesupto(i);
    };
    long long lo=1,hi=l;
    while(mismatch(hi)<k) hi*=2;
    while(lo<hi){
        long long mid=lo+(hi-lo)/2;
        if(mismatch(mid)>=k) hi=mid;
        else lo=mid+1;
    }
    cout<<lo<<endl;
}
