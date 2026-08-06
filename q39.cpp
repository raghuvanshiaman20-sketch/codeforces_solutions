#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,l,mx=0;
        cin>>l>>a>>b;
        int j=a%l;
        for(int i=0;i<l;i++){
            mx=max(j,mx);
            j=(j+b)%l;
        }
        cout<<mx<<endl;
    }
}