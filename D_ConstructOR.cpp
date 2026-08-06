#include <bits/stdc++.h>
using namespace std;
long long ex_eu(long long a, long long b,long long&x,long long &y){
    x=1,y=0;
    long long x1=0,y1=1,a1=a,b1=b;
    while(b1){
        long long q=a1/b1;
        tie(x,x1)=make_tuple(x1,x-q*x1);
        tie(y,y1)=make_tuple(y1,y-q*y1);
        tie(a1,b1)=make_tuple(b1,a1-q*b1);
    }
    return a1;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        long long a,b,d;
        cin>>a>>b>>d;
        int fl=0;
        int k=0;
        while(((d>>k)&1)==0){
            k++;
        }
        for(int i=0;i<k;i++){
            if((a&(1ll<<i))!=0||(b&(1ll<<i))!=0){
                fl=1;
                break;
            }
        }
        if(fl) cout<<-1<<endl;
        else{
            int64_t ans=a|b;
            if(ans%d==0) cout<<ans<<endl;
            else{
                int64_t dp=d>>k;
                int64_t q=1ll<<(30-k);
                int64_t u,v;
                ex_eu(q,dp,u,v);
                int64_t p=((u-1)%(dp)+(dp))%(dp);
                cout<<(1LL<<k)*(p*(q)+(q-1))<<endl;
            }
        }
    }
}