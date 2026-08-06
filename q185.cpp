#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k,p,m;
        cin>>n>>k>>p>>m;
        vector<int> a(n+1);
        for(int i=1;i<=n;i++){
            cin>>a[i];
        }
        if(n==k){
            cout<<m/a[p]<<endl;
        }
        else{
            if(k<p){
                int cnt=0;
                sort(a.begin()+1,a.begin()+p);
                int ca=p-k,s=0;
                for(int i=1;i<=ca;i++){
                    s+=a[i];
                }
                s+=a[p];
                if(s<=m){
                    m-=s;
                    cnt++;
                }
                vector<int> so(n);
                for(int i=1;i<p;i++){
                    so[i]=a[i];
                }
                for(int i=p+1;i<=n;i++){
                    so[i-1]=a[i];
                }
                sort(so.begin()+1,so.end());
                int total=0;
                int oc=n-k;
                for(int i=1;i<=oc;i++){
                    total+=so[i];
                }
                total+=a[p];
                cout<<cnt+(m/total)<<endl;
            }
            else{
                vector<int> so(n);
                for(int i=1;i<p;i++){
                    so[i]=a[i];
                }
                for(int i=p+1;i<=n;i++){
                    so[i-1]=a[i];
                }
                sort(so.begin()+1,so.end());
                int total=0;
                int oc=n-k;
                for(int i=1;i<=oc;i++){
                    total+=so[i];
                }
                total+=a[p];
                int cnt=0;
                if(a[p]<=m){
                    m-=a[p];
                    cnt++;
                }
                cout<<cnt+(m/total)<<endl;
            }
        }
    }
}