#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long x,y;
        cin>>x>>y;
        long long j=x;
        int f=0;
        for(int i=2;j<y;i++){
            j=x*i;
            if(j%x==0){
                if(y%j!=0){
                    f=1;
                    break;
                }
            }
        }
        if(f) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}