#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,c=0;
    cin>>t;
    while(t--){
        int a[5];
        for(int i=0;i<5;i++){
            if(i==2){
                continue;
            }
            cin>>a[i];
        }
        if(abs(a[4]-a[3])==abs(a[3]-a[1])){
            a[2]=a[3]-a[1];
        }
        else
          a[2]=a[1]+a[0];
        for(int i=0;i<3;i++){
            if(a[i+2]==a[i]+a[i+1]){
                c++;
            }
        }
        cout<<c<<endl;
        c=0;
     }    
}