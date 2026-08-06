#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,z=0,o=0;
        cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]==0){
                z++;
                continue;
            }
            if(a[i]==1){
                o++;
                continue;
            }
        }
        if(((z>=2)&&(o>=1))||z==1){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
        
    }
}