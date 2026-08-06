#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        long long l=1;
        cout<<1<<" ";
        for(int i=1;i<n;i++){
            cout<<l*(l+2)<<" ";
            l+=2;
        }
        cout<<endl;
    }
}