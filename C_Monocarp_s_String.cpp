#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        vector<int> a(n);
        for(int i=0;i<n;i++){
            if(s[i]=='a') a[i]=1;
            else a[i]=-1;
        }
        int t=accumulate(a.begin(),a.end(),0);
        vector<int> p(2*n+1,-2);
        p[n]=-1;
        int sum=0,ans=n;
        for(int i=0;i<n;i++){
            sum+=a[i];
            p[sum+n]=i;
            if(p[sum+n-t]!=-2) ans=min(ans,i-p[sum+n-t]);
        }
        if(ans==n) cout<<-1<<endl;
        else cout<<ans<<endl;
    }
}