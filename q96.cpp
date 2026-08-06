#include<bits/stdc++.h>
using namespace std;
const int inf=1e9;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<long long> a(n);
        long long maxi=-inf,mini=inf;
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(maxi<a[i]){
                maxi=a[i];
            }
            if(a[i]<mini){
                mini=a[i];
            }
        }
        long long x;
        cin>>x;
        if(x>=mini&&x<=maxi){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<< endl;
        }
    }
}