#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<long long> a(n),b(n),c(n);
        long long s=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            b[i]=a[i]-s;
            s=a[i];
        }
        long long cnt=0;
        for(int i=0;i<n;i++){
            if(b[i]==(i+1)){
                cnt++;
                c[i]=cnt;
            }
            else{
                c[i]=c[i-b[i]];
            }
            cout<<c[i]<<" ";
        }
        cout<<endl;
    }
}