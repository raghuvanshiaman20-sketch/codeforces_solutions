#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<long long> a(n),b;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    long long s=a[n-1],v=a[n-1];
    for(int i=n-2;i>=0;i--){
        int d=min(v-1,a[i]);
        v=d;
        if(d<=0){
            break;
        }
        s+=v;
        
    }
    
    cout<<s<<endl;
}
