#include<bits/stdc++.h>
using namespace std;
int main(){
    long long t;
    cin>>t;
    while(t--){
        long long n,m,x,y,e=0,f=0;
        cin>>n>>m>>x>>y;
        int a[n],b[m];
        for(long long i=0;i<n;i++){
            cin>>a[i];
            e++;
        }
        for(long long i=0;i<m;i++){
            cin>>b[i];
            f++;
        }
        cout<<e+f<<endl;
    }
}