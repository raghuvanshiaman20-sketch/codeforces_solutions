#include<bits/stdc++.h>
using namespace std;
vector<pair<long long,long long>> v;
int main(){
    int t;
    cin>>t;
    while(t--){
        v.reserve(100000);
        int n;
        cin>>n;
        v=vector<pair<long long,long long>> (n);
        for(int i=0;i<n;i++){
            cin>>v[i].first>>v[i].second;
        }
        sort(v.begin(),v.end(),[]( pair<long long,long long> a, pair<long long,long long> b){
            return (a.first+a.second)<(b.first+b.second);
        });
        for(int i=0;i<n;i++){
            cout<<v[i].first<<" "<<v[i].second<<" ";
        }
        cout<<endl;
    }
}