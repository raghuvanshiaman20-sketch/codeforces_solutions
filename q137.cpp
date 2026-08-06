#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int> a(n),b(n),c(n);
        int f=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(k!=4){
                if(a[i]%k!=0)
                b[i]=k-a[i]%k;
                else b[i]=0;
            }
            else{
                b[i]=a[i]%2;
                if(a[i]%4==0){
                    c[i]=0;
                }
                else{
                    c[i]=4-a[i]%4;
                }
            }
        }
        sort(c.begin(),c.end());
        sort(b.begin(),b.end());
        if(k!=4)
        cout<<b[0]<<endl;
        else{
            cout<<min(b[0]+b[1],c[0])<<endl;
        }
    }
}