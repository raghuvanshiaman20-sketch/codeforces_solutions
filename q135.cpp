#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n),d(n+1);
        vector<pair<int,int>> p(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
            p[i].first=a[i];
            p[i].second=i;
        }
        sort(p.begin(),p.end());
        long long time=0;
        d[0]=(n+1)/2;
        for(int i=0,j=1;i<n;i+=2,j++){
            d[p[n-i-1].second+1]=(n+1)/2+j;
            time+=1LL*p[n-i-1].first*2*(j);
        }
        for(int i=1,j=1;i<n;i+=2,j++){
            d[p[n-i-1].second+1]=(n+1)/2-j;
            time+=1LL*p[n-i-1].first*2*(j);
        }
        cout<<time<<endl;
        for(int i=0;i<=n;i++){
            cout<<d[i]<<" ";
        }
        cout<<endl;
    }
}