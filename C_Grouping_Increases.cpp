#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll m=998244353;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++) cin>>a[i];
        int cur=INT_MAX,cur2=INT_MAX;
        int ans=0;
        for(int i=0;i<n;i++){
            if(cur>cur2){
                int temp=cur2;
                cur2=cur;
                cur=temp;
            }
            if(a[i]<=cur){
                cur=a[i];
            }
            else if(a[i]<=cur2){
                cur2=a[i];
            }
            else{
                cur=a[i];
                ans++;
            }
        }
        cout<<ans<<endl;
    }
}