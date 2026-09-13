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
        for(int i=1;i<=n;i++){
            cin>>a[i];
        }
        vector<int> diff(n+1,0);
        for(int i=1;i<=n;i++){
            int l=a[i]*i;
            int r=(a[i]+1)*i;
            if(l<n){
                diff[l]++;
                r=min(r,n);
                diff[r]--;
            }
        }
        int inval=0;
        vector<int> ans;
        for(int i=0;i<n;i++){
            inval+=diff[i];
            if(inval==0) ans.push_back(i);
        }
        cout<<ans.size()<<endl;
        for(auto it:ans) cout<<it<<" ";
        cout<<endl;
    }
}