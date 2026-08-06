#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<long long> a(n);
        long long maxi=-1;
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]>maxi) maxi=a[i];
        }
        long long s=0;
        for(int i=0;i<n-1;i++){
            s+=max(a[i],a[i+1]);
        }
        s+=max(a[0],a[n-1]);
        s-=maxi;
        cout<<s<<endl;
    }
}