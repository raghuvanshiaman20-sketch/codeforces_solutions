#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        long long a=1;
        while(1){
            if(a*2<=(n-1)){
                a*=2;
            }
            else break;
        }
        for(int i=a+1;i<=n-1;i++){
            cout<<i<<" ";
        }
        cout<<a<<" "<<0<<" ";
        for(int i=1;i<a;i++){
            cout<<i<<" ";
        }
        cout<<endl;
    }
}