#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int s=0,n;
        cin>>n;
        string a;
        cin>>a;
        for(int i=n-1;a[i]!='\0';i--){
            if(a[i]=='1'){
                continue;
            }
            s++;
        }
        cout<<s+1<<endl;
    }
}