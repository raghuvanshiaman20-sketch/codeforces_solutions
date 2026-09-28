#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        long long c;
        cin>>c;
        long long x=c;
        int i=0;
        while(x>0){
            x>>=1;
            i++;
        }
        long long d=c<<i;
        cout<<c<<" "<<d<<endl;
    }
}