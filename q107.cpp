#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    vector<int> a(n),b(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
        b[i]=a[i]/m;
        if(a[i]%m){
            b[i]++;
        }
    }
    int c=1;
    int maxi=b[0];
    for(int i=1;i<n;i++){
        if(b[i]>=maxi){
            maxi=b[i];
            c=i+1;
        }
    }
    cout<<c<<endl;
}