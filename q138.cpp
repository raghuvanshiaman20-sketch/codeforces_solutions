#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,p;
        cin>>n>>p;
        vector<int> a(n),b(n);
        vector<pair<int,int>> c(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
            c[i].second=a[i];
        }
        for(int i=0;i<n;i++){
            cin>>b[i];
            c[i].first=b[i];
        }
        sort(c.begin(),c.end());
        long long co=p;
        int k=n;
        k--;
        int i=0;
        while(k){
        if(p>c[i].first){
            if(k>c[i].second){
                co+=(1ll*c[i].first*c[i].second);
                k-=c[i].second;
            }
            else{
                co+=(1ll*c[i].first*k);
                k=0;
            }
        }
        else{
            co+=(1ll*p*k);
            k=0;
        }
            i++;
        }
        cout<<co<<endl;
    }
}