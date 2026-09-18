#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> v(n+1),a(n+1);
        v[n]=1;
        for(int i=2;i<n;i++){
            v[i]=i^1;
            a[v[i]]=1;
        }
        for(int i=2;i<=n;i++){
            if(a[i]==0){
                v[1]=i;
                break;
            }
        }
        for(int i=1;i<=n;i++) cout<<v[i]<<" ";
        cout<<endl;
    }
}