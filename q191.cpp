#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<long long> a(n),b(n);
        long long sc1=0,sc2=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            cin>>b[i];
        }
        long long x=0,y=0,mini,maxi;
        for(int i=0;i<n;i++){
            mini=min(x-a[i],b[i]-y);
            maxi=max(y-a[i],b[i]-x);
            y=maxi;
            x=mini;
        }
        cout<<y<<endl;
    }
}