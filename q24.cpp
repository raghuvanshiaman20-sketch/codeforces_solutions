#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a[4];
        for(int i=0;i<4;i++){
            cin>>a[i];
        }
        if((a[0]==a[1])&&(a[2]==a[3])&&(a[1]==a[2])){
            cout<<"YES"<<endl;
        }
        else
        cout<<"NO"<<endl;
    }
}