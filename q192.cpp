#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n+1),b(n+1);
        int x=0;
        for(int i=1;i<=n;i++){
            cin>>a[i];
            x^=a[i];
        }
        int maxi=0;
        for(int i=1;i<=n;i++){
            cin>>b[i];
            x^=b[i];
            if(a[i]!=b[i]) maxi=i;
        }
        if(x==0){
            cout<<"Tie"<<endl;
        }
        else if(maxi%2==0){
            cout<<"Mai"<<endl;
        }
        else{
            cout<<"Ajisai"<<endl;
        }
    }
}