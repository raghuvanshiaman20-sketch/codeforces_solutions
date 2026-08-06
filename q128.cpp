#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long x,y,k;
        cin>>x>>y>>k;
        
        
        long long c=k+(k*y+k-1)/(x-1);
        if((k*y+k-1)%(x-1)==0){
            cout<<c<<endl;
        }
        else{
            cout<<c+1<<endl;
        }
    }
}