#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k,p;
        cin>>n>>k>>p;
        (k>0)? k=k:k=k*(-1);
        if(k<=n*p){
            if(k%p!=0){
            cout<<(k/p+1)<<endl;
            }
            else{
                cout<<(k/p)<<endl;
            }
        }
        else{
            cout<<-1<<endl;
        }
    }
}