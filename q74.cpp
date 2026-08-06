#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        long long m;
        vector<int> a(n);
        int maxi=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(maxi<a[i]){
                maxi=a[i];
            }
        }
        m=maxi*n;
        cout<<m<<endl;
    }
}