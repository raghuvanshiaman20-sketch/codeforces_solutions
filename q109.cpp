#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        vector<int> b;
        for(int i=0;i<n;i++){
            if(i+1>a[i]){
                b.emplace_back(i+1);
            }
        }
        long long cnt=0;
        for(int i=0;i<n;i++){
            if(i+1>a[i]){
                long long ans=lower_bound(b.begin(),b.end(),a[i])-b.begin();
                cnt+=ans;
            }
        }
        cout<<cnt<<endl;
    }   
}