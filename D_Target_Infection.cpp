#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        long long n,m,k;
        cin>>n>>m>>k;
        long long pl=0,pr=0,ans=-1;
        while(n>0){
            long long l,r;
            cin>>l>>r;
            if(r-l+1>=k) ans=l;
            else{
                if(pl==0&&pr==0) pl=l,pr=r;
                else{
                    if(r-pl+1<k) continue;
                    else{
                       
                    }
                }
            }
            pl=l,pr=r;
            n--;
        }
        cout<<ans<<endl;
    }
}