#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,s=0,c=0;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]==0){
                s++;
            }
            if(a[i]==-1){
                c++;
            }
        }
        if(c%2!=0){
            cout<<s+2<<endl;
        }
        else{
            cout<<s<<endl;
        }
    }
}