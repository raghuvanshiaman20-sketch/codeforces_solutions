#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n-2);
        for(int i=0;i<n-2;i++){
            cin>>a[i];
        }
        int f=0;
        for(int i=0;i<n-4;i++){
            if((a[i]==1)&&(a[i+1]==0)&&(a[i+2]==1)){
                f=1;
                break;
            }
        }
        if(f==1){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
    }
}