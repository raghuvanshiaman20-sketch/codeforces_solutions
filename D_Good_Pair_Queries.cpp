#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n,q;
        cin>>n>>q;
        string a,b;
        cin>>a>>b;
        vector<int> cnt_d01(n+1),cnt_d10(n+1),cnt_s(n+1);
        for(int i=0;i<n;i++){
            cnt_d01[i+1]=cnt_d01[i];
            cnt_d10[i+1]=cnt_d10[i];
            cnt_s[i+1]=cnt_s[i];
            if(a[i]==b[i]) cnt_s[i+1]++;
            else if(a[i]=='0') cnt_d01[i+1]++;
            else cnt_d10[i+1]++;
        }
        for(int i=0;i<q;i++){
            int x,y;
            cin>>x>>y;
            int d01=cnt_d01[y]-cnt_d01[x-1];
            int d10=cnt_d10[y]-cnt_d10[x-1];
            int s=cnt_s[y]-cnt_s[x-1];
            if(abs(d01-d10)<=s) cout<<"YES\n";
            else cout<<"NO\n";
        }
    }
}