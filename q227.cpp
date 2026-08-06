#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        long long n,x;
        cin>>n>>x;
        vector<long long> a(n),b(n),c(n),d(n);
        long long s=0;
        for(int i=0;i<n;i++){
            cin>>a[i]>>b[i]>>c[i];
            if(a[i]*(b[i]-1)>0){
                s+=(a[i]*(b[i]-1));
            }
            d[i]=a[i]*b[i]-c[i];
        }
        if(s>=x) cout<<0<<endl;
        else{
            sort(d.begin(),d.end());
            if(d[n-1]<=0) cout<<-1<<endl;
            else{
                x-=s;
                if(x%d[n-1]==0) cout<<x/d[n-1]<<endl;
                else cout<<x/d[n-1]+1<<endl;
            }
        }

    }
}