#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string a,b,c;
        cin>>a>>b>>c;
        cout<<a.substr(0,1)+b.substr(0,1)+c.substr(0,1)<<endl;
    }
}