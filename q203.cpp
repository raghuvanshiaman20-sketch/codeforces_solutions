#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        long long k;
        cin>>n>>k;
        vector<long long> s(n),t(n);
        for(int i=0;i<n;i++){
            cin>>s[i];
            s[i]=min(s[i]%k,(k-s[i]%k)%k);
        }
        int z=0;
        for(int i=0;i<n;i++){
            cin>>t[i];
            t[i]=min(t[i]%k,(k-t[i]%k)%k);
        }
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        for(int i=0;i<n;i++){
            if(s[i]!=t[i]) z++;
        }
        if(z) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
}