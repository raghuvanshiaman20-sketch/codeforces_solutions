#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(n%4==0){
            cout<<"bob"<<endl;
        }
        else{
            cout<<"alice"<<endl;
        }
    }
    return 0;
}