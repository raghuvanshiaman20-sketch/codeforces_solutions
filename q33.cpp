#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,c=1,s=0,o=0,e=0;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]%2==0){
                e=1;
            }
            if(a[i]%2!=0){
                o=1;
            }
        }
        if(n==1){
            if(a[0]%2==0){
                cout<<1<<endl;
            }
            else{
                cout<<0<<endl;
            }
        }
        else if((n>=1)&&(e==1)){
            for(int i=0;i<n;i++){
                if(a[i]%2!=0){
                    c++;
                }
            }
            cout<<c<<endl;
        }
        else if((o==1)&&(e==0)){
            cout<<n-1<<endl;
        }
    }
}