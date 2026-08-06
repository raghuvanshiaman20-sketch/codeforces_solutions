#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int o=0;
        vector<long long> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]%2!=0){
                o=1;
            }
        }
        if(o==1){
            cout<<2<<endl;
            continue;
        }
        int e=0;
        for(long long x=3;x<pow(10,18);x++){
            for(int i=0;i<n;i++){
                if(__gcd(a[i],x)==1){
                    e=x;
                    break;
                }
            }
            if(e!=0){
                cout<<e<<endl;
                break;
            }
        }
    }
}