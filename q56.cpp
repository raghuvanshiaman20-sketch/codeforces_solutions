#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n,m=1;
        cin>>n;
        vector<long long> a;
        for(int k=1;k<18;k++){
            m*=10;
            if(n%(m+1)==0){
                a.emplace_back(n/(m+1));
            }
        }
        sort(a.begin(),a.end());
        if(a.size()){
        cout<<a.size()<<endl;
        for(auto it: a){
            cout<<it<<" ";
        }
        cout<<endl;
        }
        else{
            cout<<0<<endl;
        }
        
    }
}