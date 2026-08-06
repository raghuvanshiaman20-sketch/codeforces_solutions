#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        int x=m,y=m;
        int a[n],b[n];
        for(int i=0;i<n;i++){
            cin>>a[i]>>b[i];
        }
        for(int i=0;i<n;i++){
            x+=a[i];
            y+=b[i];
        }
        x=x-a[0];
        y=y-b[0];
        cout<<2*(x+y)<<endl;
    }
}