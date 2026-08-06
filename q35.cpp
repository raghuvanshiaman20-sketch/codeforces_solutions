#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,x,y;
        cin>>a>>x>>y;
        if(x>=y){
            if((y<=a)&&(a<=x)){
                cout<<"NO"<<endl;
            }
            else
            cout<<"YES"<<endl;
        }
        else{
            if((x<=a)&&(a<=y)){
                cout<<"NO"<<endl;
            }
            else
            cout<<"YES"<<endl;
        }
    }
}
