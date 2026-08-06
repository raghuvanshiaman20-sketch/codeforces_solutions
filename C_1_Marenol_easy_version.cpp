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
        string a,b;
        cin>>a>>b;
        int cnta_1=0,cntb_1=0,cnta_0=0,cntb_0=0;
        for(int i=0;i<n;i++){
            if(a[i]=='1') cnta_1++;
            if(a[i]=='0') cnta_0++;
            if(b[i]=='1') cntb_1++;
            if(b[i]=='0') cntb_0++;
        }
        if(cnta_1!=cntb_1) cout<<"NO\n";
        else{
            int cnt_eb=0,cnt_ea=0;
            for(int i=0;i<n;i++){
                if(a[i]=='1'){
                    if(i%2==0) cnt_ea++;
                }
                if(b[i]=='1'){
                    if(i%2==0) cnt_eb++;
                }
            }
            if(cnt_ea!=cnt_eb) cout<<"NO\n";
            else cout<<"YES\n";
        }
    }
}