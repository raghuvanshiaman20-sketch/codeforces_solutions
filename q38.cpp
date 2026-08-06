#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long a,b,k=0,l=0;
        cin>>a>>b;
        while(1){
            if(b>=a){
            long long v=(1LL << k);
            
            if((k%2==0)){
                if(a>=v){
                    a-=v;
                    l++;
                }
                else{
                    break;
                }
            }
        
            else{
                if(b>=v){
                  b-=v;
                  l++;
                }
                else{
                   break;
                }
            }
            k++; 
        }
        else{
            long long v=(1LL << k);
            
            if((k%2==0)){
                if(b>=v){
                    b-=v;
                    l++;
                }
                else{
                    break;
                }
            }
        
            else{
                if(a>=v){
                  a-=v;
                  l++;
                }
                else{
                   break;
                }
            }
            k++; 
        }
       }
        cout<<l<<endl;
    }
}