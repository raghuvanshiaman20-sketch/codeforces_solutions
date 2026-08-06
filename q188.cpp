#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n,m,h;
        cin>>n>>m>>h;
        vector<long long> a(n+1),mod(n+1),last(n+1,0);
        for(long long i=1;i<=n;i++){
            cin>>a[i];
            mod[i]=a[i];
        }
        int reset=-1;
        for(long long i=1;i<=m;i++){
            long long x,y;
            cin>>x>>y;
            if(last[x]<reset) mod[x]=a[x];
            mod[x]+=y;
            if(mod[x]>h){
                reset=i;
                mod[x]=a[x];
            }
            last[x]=i;
        }
        for(int i=1;i<=n;i++){
            if(last[i]<reset) cout<<a[i]<<" ";
            else cout<<mod[i]<<" ";
        }
        cout<<endl;
    }
}