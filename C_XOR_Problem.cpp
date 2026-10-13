#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int M=1;
        while(M<=n) M<<=1;
        cout<<2*M-1<<endl;
        int pre=0;
        vector<long long> v(2*M);
        for(int i=1;i<2*M;i<<=1){
           for(int j=i;j<2*M;j+=2*i){
            v[j]=(i>>1);
           }
        }
        for(int i=1;i<2*M;i++) cout<<v[i]<<" ";
        cout<<endl;
    }
}