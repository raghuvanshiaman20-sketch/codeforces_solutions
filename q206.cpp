#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<long long> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];  
        }
        sort(a.begin(),a.end());
        long long mini=a[0];
        if(a[0]%2==0){
            long long need=1;
            while(!need>a[0]){
                need=need<<1;
            }
            need=need>>1;
        }
        else{
            long long need=1;
        }
    }
}