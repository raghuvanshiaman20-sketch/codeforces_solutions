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
        string s;
        cin>>s;
        vector<int> v(10);
        for(int i=0;i<n;i++) v[s[i]-'0']++;
        int ans=0;
        int cnt_5=v[0]+v[1]+v[2]+v[3]+v[4]+v[5];
        int cnt_1=v[0]+v[1];
        for(int i=0;i<=v[0];i++){
            int j=0,h=v[1],l=0;
            while(h>=l){
                j=(l-h)/2+h;
                if((cnt_1-i-j)>=j&&(cnt_5-i-2*j)>=i+j&&(n-2*i-3*j)>=2*i+j){
                    ans=max(ans,i+j);
                    l=j+1;
                }
                else{
                    h=j-1;
                }
            }
            // for(int j=0;j<=v[1];j++){
            //     if((cnt_1-i-j)>=j&&(cnt_5-i-2*j)>=i+j&&(n-2*i-3*j)>=2*i+j)
            //     ans=max(ans,i+j);
            // }
        }
        cout<<ans<<endl;
    }
}