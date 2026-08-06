#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n,k;
        cin>>n>>k;
        vector<long long> a(n);
        vector<pair<long long,long long>> b(n),c(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
            b[i].first=(a[i]%k);
            if(b[i].first==0) b[i].first=k;
            b[i].second=i+1;
        }
        sort(b.begin(), b.end(),[](const pair<int,int> &a,const pair<int,int> &b){
        if (a.first != b.first)
            return a.first > b.first;  
        return a.second < b.second;
        });


        for(int i=0;i<n;i++){
            cout<<b[i].second<<" ";
        }
        cout<<endl;
    }
}