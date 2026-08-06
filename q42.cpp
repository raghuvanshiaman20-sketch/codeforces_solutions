#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        long long a=(n+1)/15;
        long long b=(n+1)%15;
        if(b==1){
            cout<<a*3+1<<endl;
        }
        else if(b==2){
            cout<<a*3+2<<endl;
        }
        else if(b>=3){
            cout<<(a+1)*3<<endl;
        }
        else{
            cout<<(a*3)<<endl;
        }
    }
}