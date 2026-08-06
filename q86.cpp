#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    vector<int> a(n),c(n),b(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int j=0;
    set<int> d(a.begin(),a.end());
    for(auto it:d){
        for(int i=0;i<n;i++){
            if(it==a[i]){
                c[j]=i;
                j++;
            }
        }
    }
    int l=0,m=0;
    while(k){
        if(l==n){
            break;
        }
       k=(k-(a[c[l]]));
       if(k<0){
        break;
       }
       b[m]=c[l]+1;
       l++,m++;
    }
    cout<<m<<endl;
    for(int i=0;i<m;i++){
        cout<<b[i]<<" ";
    }
    cout<<endl;
}