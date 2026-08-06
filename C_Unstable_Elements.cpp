#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int> a(n),b(n+1);
        int cnt=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            b[a[i]]++;
            if(b[a[i]]==1) cnt++;
        }
        sort(b.begin(),b.end());
        int p=0,cur=0,t=0,j=1,fl=0;
        for(int i=0;i<b[n];i++){
           while(b[j]<=i){
            t+=b[j];
            if(b[j]!=0){
                fl=0;
                cnt--;
            }
            j++;
           }
           if((n-t-i*cnt)<=k&&(k-(n-t-i*cnt))%cnt==0&&fl==0){
            p++;
            fl=1;
           }
        }
        cout<<p<<endl;
    }
}