#include<bits/stdc++.h>
using namespace std;
int main(){
    long long t;
    cin>>t;
    while(t--){
        long long n,a,p=0,q=0;
        cin>>n;
        cin>>a;
        long long b[n];
        for(int i=0;i<n;i++){
            cin>>b[i];
        }
        for(int i=0;i<n;i++){
            if(a<b[i]){
                p++;
            }
            if(a>b[i]){
                q++;
            }
        }
        if(p>q){
           cout<<a+1<<endl;
        }
        else{
            cout<<a-1<<endl;
        }
    }
}