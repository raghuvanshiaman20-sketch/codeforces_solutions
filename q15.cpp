#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,c=0,j=1;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(;j<n;j++){
            if(a[j-1]>a[j]){
                c++;
                for(;j<n-1;j++){
                    a[j]=a[j+1];
                }
            }
            j=1;
            n--;
        }
        cout<<c<<endl;

    }
}
