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
        int maxi=a[0];
        int mini;
        for(int i=0;;i++){
            mini=count(a.begin(),a.end(),i);
            if(mini=0){
                mini=i;
                break;
            }
        }
        for(int i=1;i<n;i++){
            if(maxi<a[i]){
                maxi=a[i];
            }
        }
        

    }
}
