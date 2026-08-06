#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,q;
        cin>>n>>q;
        vector<int> a(n),b(n),nu(n);
        vector<pair<int,int>> c(q);
        vector<long long> d(q);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            cin>>b[i];
        }
        for(int i=0;i<q;i++){
            cin>>c[i].first>>c[i].second;
        }
        for(int i=0;i<n;i++){
            if(b[i]>a[i]){
                nu[i]=b[i];
            }
            else{
                nu[i]=a[i];
            }
        }
        for(int i=0;i<(n-1);i++){
            if(nu[i+1]>nu[i]){
                nu[i]=nu[i+1];
            }
        }
        int k=0;
        while(q>k){
            int s=0;
            if(c[k].first==c[k].second){
                s=nu[c[k].first-1];
                d[k]=s;
                k++;
                continue;
            }
            for(int i=(c[k].first-1);i<(c[k].second-1);i++){
                s+=nu[i];
            }
            d[k]=s;
            k++;
        }
        for(int i=0;i<q;i++){
            cout<<d[i]<<" ";
        }
        cout<<endl;
    }
}
