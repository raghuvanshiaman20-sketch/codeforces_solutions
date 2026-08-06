#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n),b(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int c=0,j=0;
        for(int i=0;i<n;i++){
            if(n-i==a[i]){
                continue;
            }
            else{
                c=n-i;
                j=i;
                break;
            }
        }
        if(c==0){
            for(int i=0;i<n;i++){
                cout<<a[i]<<" ";
            }
            cout<<endl;
        }
        else{
            int sz=0,z=0;
            for(int i=0;i<j;i++){
                cout<<a[i]<<" ";
            }
            for(int i=j;i<n;i++){
                if(a[i]==c){
                    b[sz]=a[i];
                    sz++;
                    z=i+1;
                    break;
                }
                b[sz]=a[i];
                sz++;
            }
            for(int i=sz-1;i>=0;i--){
                cout<<b[i]<<" ";
            }
            for(int i=z;i<n;i++){
                cout<<a[i]<<" ";
            }
            cout<<endl;
        }
        
    }
}
