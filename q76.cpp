#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n,m,h;
        cin>>n>>m>>h;
        vector<long long> a(n);
        vector<long long> b(n);
        vector<pair<long long,long long>> c(m);
        for(long long i=0;i<n;i++){
            cin>>a[i];
            b[i]=a[i];
        }
        for(long long i=0;i<m;i++){
            cin>>c[i].first>>c[i].second;
        }
        for(long long i=0;i<m;i++){
            b[c[i].first-1]+=c[i].second;
            if(b[c[i].first-1]>h){
                for(long long j=0;j<n;j++){
                    b[j]=a[j];
                }
            }
        }
        for(long long i=0;i<n;i++){
            cout<<b[i]<<" ";
        }
        cout<<endl;
    }
}