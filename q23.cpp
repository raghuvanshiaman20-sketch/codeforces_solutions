#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        a[0]=1;a[n-1]=2;
        for(int i=1,j=3;i<n-1;i++){
            a[i]=j;
            j++;
        }
        for(int i=0;i<n;i++){
            cout<<a[i]<<" ";
        }
    }
}