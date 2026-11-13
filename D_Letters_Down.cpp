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
        string s;
        cin>>s;
        int el1=25,el2=0;
        vector<int> op(27);
        for(int i=0;i<n/2;i++){
            if(s[i]==s[n-1-i]) continue;
            if(s[i]<s[n-i-1]){
                op[s[i]-'a']--;
                op[s[n-i-1]-'a']++;
            }
            else{
                op[s[i]-'a']++;
                op[s[n-i-1]-'a']--;
            }
        }
        int c=0,ans=0;
        for(int i=0;i<27;i++){
            c+=op[i];
            if(c!=0) ans++;
        }
        cout<<ans<<endl;
    }
}