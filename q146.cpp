#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(n%2==0){
            cout<<n/2<<" "<<n/2<<endl;
        }
        else{
            int a=1;
            for(int i=2;i*i<=n;i++){
                if(n%i==0){
                    a=n/i;
                    break;
                }
            }
            cout<<a<<" "<<n-a<<endl;
        }
    }
}