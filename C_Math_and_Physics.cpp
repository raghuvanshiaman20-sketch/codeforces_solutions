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
        ll s=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            s+=a[i];
        }
        if(s==n) cout<<-1<<endl;
        else if(s-a[0]==n-1||s-a[n-1]==n-1) cout<<max(a[0],a[n-1])<<endl;
        else if(s-a[0]-a[n-1]==n-2) cout<<a[0]+a[n-1]-1<<endl;
        else cout<<s-1<<endl;
    }
}