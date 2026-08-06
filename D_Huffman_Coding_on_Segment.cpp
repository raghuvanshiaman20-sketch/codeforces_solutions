#include <bits/stdc++.h>
using namespace std;
long long mod=1e9+7;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    long long total=0;
    priority_queue<long long,vector<long long>,greater<long long>> pq;
    for(int i=0;i<n;i++){
        long long a;
        cin>>a;
        pq.push(a);
    }
    while(pq.size()!=1){
        long long el1=pq.top();
        pq.pop();
        long long el2=pq.top();
        pq.pop();
        total+=(el1+el2);
        pq.push(el1+el2);
    }
    cout<<total<<endl;
}