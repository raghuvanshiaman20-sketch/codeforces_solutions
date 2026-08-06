#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long l,r;
        cin>>l>>r;
        long long cnt=0;
        for(int i=0;i<210;i++){
            if(i%2==0||i%3==0||i%5==0||i%7==0) continue;
            else cnt++;
        }
        long long k=(l)/210;
        long long modu=(l)%210;
        long long cnt2=k*cnt;
        for(int i=0;i<modu;i++){
            if(i%2==0||i%3==0||i%5==0||i%7==0) continue;
            else cnt2++;
        }
        long long k2=(r+1)/210;
        long long modu2=(r+1)%210;
        long long cnt3=k2*cnt;
        for(int i=0;i<modu2;i++){
            if(i%2==0||i%3==0||i%5==0||i%7==0) continue;
            else cnt3++;
        }
        cout<<cnt3-cnt2<<endl;
    }
}