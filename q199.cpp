#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        char ar[n][n]={};
        if((n*n-k)==1){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
            for(int i=0;i<n;i++){
                for(int j=0;j<n;j++){
                    if(k>0) ar[i][j]='U';
                    k--;
                    if(k<=0){
                        break;
                    }
                }
                if(k<=0){
                    break;
                }
            }
            for(int i=0;i<n;i++){
                for(int j=0;j<n;j++){
                    if(ar[i][j]=='\0'){
                        if(i==n-1&&j==n-1){
                             ar[i][j]='L';
                        }
                        else if(i==n-1){
                            ar[i][j]='R';
                        }
                        else{
                            ar[i][j]='D';
                        }
                    }
                }
            }
            for(int i=0;i<n;i++){
                for(int j=0;j<n;j++){
                    cout<<ar[i][j];
                }
                cout<<endl;
            }
        }
    }
}