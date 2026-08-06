#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,x,s=0;
        cin>>n;
        cin>>x;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            s+=a[i];
        }

        if(s==x*n){
            cout<<"YES"<<endl;
        }
        else
        cout<<"NO"<<endl;
    }
}