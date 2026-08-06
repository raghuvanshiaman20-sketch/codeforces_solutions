#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    string a;
    cin>>t;
    while(t--){
        string A;
        cin>>a;
        int b=0;
        for(int i=0;a[i]!='\0';i++){
            b++;
        }
        if(b<=10){
            cout<<a<<endl;
        }
        else{
            cout<<a[0]<<b-2<<a[b-1]<<endl;
        }
    }
    return 0;
}