#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        long long x;
        cin>>x;
        int i=0;
        long long y=1;
        while(x>0){
            x/=10;
            y*=10;
        }
        cout<<y+1<<endl;
    }
}