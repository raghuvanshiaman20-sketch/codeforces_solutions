#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,k;
    cin>>n>>k;
    vector<vector<long long>> v(n,vector<long long>(2));
    for(int i=0;i<n;i++){
        long long a,b;
        cin>>a>>b;
        v[i][0]=b;
        v[i][1]=a;
    }
    sort(v.begin(),v.end());
    long long cnt=0;
    multiset<long long> o;
    for(int i=0;i<k;i++) o.insert(0);
    for(int i=0;i<n;i++){
        auto it=o.upper_bound(v[i][1]);
        if(it==o.begin()) continue;
        it--;
        o.erase(it);
        o.insert(v[i][0]);
        cnt++;
    }
    cout<<cnt<<endl;
}