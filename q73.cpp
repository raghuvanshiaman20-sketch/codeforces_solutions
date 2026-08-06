#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        for(int i=1;n>0;i++){
            cout<<i<<" ";
            n--;
        }
        cout<<endl;
    }
}