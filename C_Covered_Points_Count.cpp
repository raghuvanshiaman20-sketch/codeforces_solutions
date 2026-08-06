#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    int x=n,cnt=0;
    vector<long long> b(n+1);
    vector<pair<long long,long long>> v(2*n);
    int i=0;
    while(x>0){
        long long l,r;
        cin>>l>>r;
        v[i].first=l;
        v[i].second=1;
        i++;
        v[i].first=r+1;
        v[i].second=-1;
        i++;
        x--;
    }
    sort(v.begin(),v.end());
    for(int i=0;i<(2*n-1);i++){
        cnt+=v[i].second;
        b[cnt]+=v[i+1].first-v[i].first;
    }
    for(int i=1;i<=n;i++) cout<<b[i]<<" ";
    cout<<endl;
}