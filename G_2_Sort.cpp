#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<long long> a(n+1);
        for(int i=1;i<=n;i++) cin>>a[i];
        int cnt=0,ex=0;
        for(int i=1;i<n;i++){
            if(a[i]<a[i+1]*2){
                ex++;
            }
            else{
                ex=0;
            }
            if(ex==k){
                cnt++;
                ex--;
            }
        }
        cout<<cnt<<endl;
    }
}