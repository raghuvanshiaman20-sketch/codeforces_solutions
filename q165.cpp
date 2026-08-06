#include <bits/stdc++.h>
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
        long long maxi=0;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if((a[i]^a[j])>maxi){
                    maxi=a[i]^a[j];
                }
            }
        }
        cout<<maxi<<endl;
    }
}
