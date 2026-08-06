#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        long long cnt=0;
        for(int i=1;i<=n;i++){
            long long z=n/i;
            cnt+=(z*z);
        }
        cout<<cnt<<endl;
    }
}