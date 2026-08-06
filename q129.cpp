#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<long long> b(n);
        for(int i=0;i<n;i++){
            cin>>b[i];
        }
        int f=0;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(b[i]==b[j]){
                    f=1;
                    break;
                }
            }
        }
        if(f){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}