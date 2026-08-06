#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,z=0,o=0;
        cin>>n;
        string s;
        cin>>s;
        vector<int> b(n);
        for(int i=0;i<n;i++){
            if(s[i]=='0'){
                b[z]=i+1;
                z++;
            }
        }
        if(z==0){
            cout<<0<<endl;
            cout<<"\n";
        }
        else{
            cout<<z<<endl;
            for(int i=0;i<z;i++){
                cout<<b[i]<<" ";
            }
            cout<<endl;
        }
        
    }
}