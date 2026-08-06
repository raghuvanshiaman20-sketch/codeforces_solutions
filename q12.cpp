#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string a;
        int b,c=0;
        cin>>b;
        cin>>a;
        for(int i=0;i<b;i++){
          if(a[i]!=a[b-1]){
            c++;
         
          }
        }
        
        cout<<c<<endl;
    }
}