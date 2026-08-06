#include <bits/stdc++.h>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<long long> a(n+1);
        for(int i=1;i<=n;i++){
            cin>>a[i];
        }
        sort(a.begin(),a.end());
        long long s=a[n]*n;
        long long mini=0,cnt=0;
        for(int i=1;i<n;i++){
            if(a[i]==mini){
                mini++;
                cnt++;
            } 
        }
        if(a[n]==a[n-1]){
            s+=(mini*(mini+1)/2);
            s+=((n-1-cnt)*mini);
            if(a[n]<=mini) cout<<max(s+1,s-a[n]*n+accumulate(a.begin(),a.end(),0)+mini)<<endl;
            else cout<<max(s,s-a[n]*n+accumulate(a.begin(),a.end(),0)+mini)<<endl;
        }
        else{
            int f=0;
            if(a[n]==mini){
                mini++;
                f=1;
            }
            s+=(mini*(mini+1)/2);
            s+=((n-1-cnt)*mini);
            if(f==1) s-=(mini-1);
            cout<<s<<endl;
        }
        
    }
}