#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n;
        long long k;
        cin>>n>>k;
        string s;
        cin>>s;
        int cnt_o=0,cnt_e=0,p_o=0,p_e=0;
        for(int i=0;i<2*n;i++){
            if(s[i]=='1'){
                if(i%2==0) cnt_o++;
                else cnt_e++;
            }
            if(i==2*n-1){
                if(s[i]=='1'&&s[0]=='0'){
                    if(i%2==0) p_o++;
                    else p_e++;
                }
            }
            else{
                if(s[i]=='1'&&s[i+1]=='0'){
                    if(i%2==0) p_o++;
                    else p_e++;
                }
            }
        }
        if(cnt_o+cnt_e==0) cout<<0<<" "<<0<<endl;
        else if(cnt_o+cnt_e==2*n) cout<<n<<" "<<n<<endl;
        else{
            if(p_o==0){
                cout<<cnt_e-p_e<<" "<<cnt_o+p_e<<endl;
            }
            else if(p_e==0){
                cout<<cnt_e+p_o<<" "<<cnt_o-p_o<<endl;
            }
            else{
                cout<<cnt_e+p_o-p_e<<" "<<cnt_o+p_e-p_o<<endl;
            }
        }
    }
}