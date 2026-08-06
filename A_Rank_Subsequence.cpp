#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> l(n+1),r(n+1),u(n+1),v(n+1);
        for(int i=0;i<n;i++) cin>>l[i+1]>>r[i+1]>>u[i+1]>>v[i+1];
        int ans=0,cnt=0;
        for(int i=n;i>=1;i--){
            cnt=0;
            for(int j=1;j<=n;j++){
                if(cnt==i) break;
                if((l[j]<=(cnt+1)&&r[j]>=(cnt+1))||(u[j]<=(i-cnt)&&(i-cnt)<=v[j])) continue;
                else cnt++;
            }
            if(cnt==i){
                ans=max(ans,i);
            }
        }
        cout<<ans<<endl;
    }
}