#include <bits/stdc++.h>
using namespace std;
int main() {
ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        long long p,q;
        cin>>p>>q;
        if(p>=q){
            cout<<"Alice"<<endl;
            continue;
        }
        else{
            if(p*3>=q*2) cout<<"Bob"<<endl;
            else cout<<"Alice"<<endl;
        }
    }
}
