#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n,d,wins=0;
    cin>>n>>d;
    vector<long long> v(n);
    for(long long i=0;i<n;i++){
        cin>>v[i];
    }
    long long i=n-1,pl=n,po=0;
    sort(v.begin(),v.end());
    while(i>=0&&pl>0){
        po+=v[i];
        if(po>d){
            wins++;
            po=0;
            i--;
        }
        pl--;
    }
    cout<<wins<<endl;
}