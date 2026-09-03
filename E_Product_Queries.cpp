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
        vector<int> a(n+1);
        for(int i=1;i<=n;i++) cin>>a[i];
        sort(a.begin(),a.end());
        vector<int> ans(n+1,100000);
        for(int i=1;i<=n;i++){
            ans[a[i]]=1;
        }
        for(int i=1;i<=n;i++){
            if(ans[i]==100000){
                for(int j=2;j*j<=i;j++){
                    if(i%j==0&&ans[i/j]!=-1&&ans[j]!=-1){
                        ans[i]=min(ans[i],ans[j]+ans[i/j]);
                    }
                }
                if(ans[i]==100000) ans[i]=-1;
            }
        }
        for(int i=1;i<=n;i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }
}