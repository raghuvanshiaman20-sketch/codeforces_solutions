#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int d,n,c=0,i;
        long long int r,x;
        cin>>r>>x>>d>>n;
        string a;
        cin>>a;
        if(r<x){
            cout<<n<<endl;
        }
        else{
            for( i=0;i<n;i++){
              if(a[i]=='1'){
                c+=1;
                r-=d;
              }
              else if(a[i]=='2'){
                if(r<x){
                    c+=1;
                }
              }  
            }
            cout<<c<<endl;
        }
    }
}