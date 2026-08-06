#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        int s=0,c=0,f=0;
        int a[n][m];
        int min=101;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin>>a[i][j];
                if(a[i][j]<0){
                    a[i][j]*=(-1);
                    c++;
                }
                if(min>a[i][j]){
                    min=a[i][j];
                }
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                    s+=a[i][j];
            }
        }
        if((c%2==0)||(f==1)){
            cout<<s<<endl;
        }
        else{
            cout<<s-2*min<<endl;
        }
    }
}