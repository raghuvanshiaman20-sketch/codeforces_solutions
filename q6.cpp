#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,max=1,c;
    cin>>a>>b;
    if((b>a)||(b==a)){
        c=6-b+1;
    }
    else
    c=6-a+1;
    for(int i=1;i<7;i++){
        if(c%i==0 && 6%i==0){
            max=i;
        }
    }
    int d=6/max;
    c/=max;
    cout<<c<<"/"<<d<<endl;
    return 0;
}