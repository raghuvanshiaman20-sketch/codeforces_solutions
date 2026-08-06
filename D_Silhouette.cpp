#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<long long> a(n),d(n);
        map<long long,long long> c,r;
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(c.find(a[i])==c.end()) c[a[i]]=1;
            else c[a[i]]++;
            d[i]=a[i];
        }
        sort(d.begin(),d.end());
        long long fl=0,max_val=0,stan=0;
        if(c.find(0)==c.end()) fl=1;
        for(int i=0;i<n-1;i++){
            if(d[i]==d[i+1]){
                continue;
            }
            else{
                if((d[i+1]-d[i])%c[d[i]]!=0){
                    fl=1;
                    break;
                }
                r[d[i]]=(d[i+1]-d[i])/c[d[i]];
                if(r[d[i]]<=stan){
                    fl=1;
                    break;
                }
                stan=max(stan,r[d[i]]);
                max_val=max(max_val,r[d[i]]);
            }
        }
        if(fl) cout<<-1<<endl;
        else{
            r[d[n-1]]=-1;
            for(int i=0;i<n;i++){
                if(r[a[i]]!=-1) cout<<r[a[i]]<<" ";
                else cout<<max_val+1<<" ";
            }
            cout<<endl;
        }
    }
}