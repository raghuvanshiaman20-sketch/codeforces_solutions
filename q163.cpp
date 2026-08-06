#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int j=1,z=n+1,k=n+2;
        for(int i=0;i<(3*n);i++){
            if(i%3==0){
                cout<<j<<" ";
                j++;
            }
            else if(i%3==1){
                cout<<z<<" ";
                z+=2;
            }
            else{
                cout<<k<<" ";
                k+=2;
            }
        }
        cout<<endl;
    }
}
