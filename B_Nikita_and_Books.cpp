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
        vector<int> a(n);
        long long s=0;
        int fl3=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            s+=a[i];
            s-=(i+1);
            if(s<0) fl3=1;
        }
        if(fl3) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
}