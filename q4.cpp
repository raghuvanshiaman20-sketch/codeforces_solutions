#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--){
        string a;
        cin>>a;
        for(int i=0;i<3;i++){
            a[i]=toupper(a[i]);
        }
        if(a=="YES"){
            cout<<"YES"<<endl;
        }
        else
        cout<<"NO"<<endl;
    }

}