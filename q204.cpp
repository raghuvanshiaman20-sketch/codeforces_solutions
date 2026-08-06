#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        for(int i=1,j=1;i<=n;i++,j+=2){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}