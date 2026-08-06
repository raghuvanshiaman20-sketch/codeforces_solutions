#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int> a(k+1);
        vector<pair<int,int>> b(n);
        for(int i=1;i<=k;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            cin>>b[i].first;
            b[i].second=i+1;
        }
        sort(b.begin(),b.end(),[] (pair<int,int> a ,pair<int,int>  b) { 
            if(a.first!=b.first) return a.first>b.first;
            return a.second<b.second;
        });
        int cnt=0,i=0;
        vector<int> c;
        while(cnt<=1000&&(i<n)){
            if(b[i].first!=k+1){
                b[i].first++;
                c.emplace_back(b[i].second);
                cnt++;
            }
            else{
                i++;
            }
        }
        cout<<cnt<<endl;
        if(cnt==0){
            cout<<endl;
        }
        else{
            for(auto it:c){
                cout<<it<<" ";
            }
            cout<<endl;
        }
    }
}