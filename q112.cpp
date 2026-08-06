#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n,w,c=0;
        cin>>n>>w;
        c=n/w;
        cout<<n-c<<endl;
    }
}