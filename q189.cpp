#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n,k;
        cin>>n>>k;
        long long x=n,y=n,cnt=0;
        while(y!=1){
            if(x<=k&&k<=y) break;
            x=x/2;
            y=y/2+(y%2);
            cnt++;
        }
        if(x<=k&&k<=y) cout<<cnt<<endl;
        else cout<<-1<<endl;
    }
}