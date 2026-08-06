#include <bits/stdc++.h>
using namespace std;
bool comp(pair<long long,long long> p1,pair<long long,long long> p2){
    if(p1.first>p2.first) return true;
    if(p1.first==p2.first){
        if(p1.second<p2.second) return true;
        else return false;
    }
    return false;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    vector<long long> a(n);
    for(long long &x:a) cin>>x;
    vector<pair<long long,long long>> p;
    for(int i=0;i<n;i++){
        long long k=0,el=a[i];
        while(el%3==0){
            k++;
            el/=3;
        }
        p.push_back({k,a[i]});
    }
    sort(p.begin(),p.end(),comp);
    for(auto it: p) cout<<it.second<<" ";
    cout<<endl;
}