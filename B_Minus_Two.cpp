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
        int cnt_o=0,cnt_e2=0,cnt_e0=0;
        for(int i=0;i<n;i++) cin>>a[i];
        for(int i=0;i<n;i++){
            if(a[i]%2==1) cnt_o++;
            if(a[i]%2==0){
                if((a[i]/2)%2==1) cnt_e2++;
                else cnt_e0++;
            }
        }
        cout<<max({cnt_o,cnt_e0,cnt_e2})<<endl;
    }
}