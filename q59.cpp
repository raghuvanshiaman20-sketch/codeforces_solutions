#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,e=0,o=0;
        cin>>n;
        vector<long long> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]%2==0){
                e=1;
            }
            if(a[i]%2!=0){
                o=1;
            }
        }
        if((o==1)&&(e==0)||(o==0)&&(e==1)){
            for(int i=0;i<n;i++){
                cout<<a[i]<<" ";
            }
        }
        else{
            sort(a.begin(),a.end());
            for(int i=0;i<n;i++){
                cout<<a[i]<<" ";
            }
        }
        cout<<endl;
    }
}