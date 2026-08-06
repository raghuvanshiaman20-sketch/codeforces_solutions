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
        vector<long long> a(n);
        long long s_o=0,s_e=0,cnt=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]%2==1){
                s_o+=a[i];
                cnt++;
            }
            else s_e+=a[i];
        }
        sort(a.begin(),a.end());
        if(s_o==0||s_e==0) cout<<a[n-1]<<endl;
        else{
            if((s_e+s_o-cnt)%2==0) cout<<s_e+s_o-cnt+1<<endl;
            else cout<<s_o+s_e-cnt<<endl;
        }
    }
}