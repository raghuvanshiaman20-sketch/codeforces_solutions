#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        vector<int> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];   
        }
        sort(a.begin(),a.end());
        int el=a[n-1];
        int total=accumulate(a.begin(),a.end(),0);
        int s=0;
        while(el!=1){
            if(el%2!=0) el++;
            el/=2;
            s++;
        }
        vector<long long> ans(m+1);
        for(int i=s;i<=m;i++){
            ans[i]=total;
        }
        
        for(int i=1;i<=m;i++) cout<<ans[i]<<" ";
        cout<<endl;
    }
}