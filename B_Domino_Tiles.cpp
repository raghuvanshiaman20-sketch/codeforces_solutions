#include <bits/stdc++.h>
using namespace std;
long long mod=998244353;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n;
        string s;
        cin>>n;
        cin>>s;
        int cnt=0;
        for(int i=0;i<n;i++){
            if(s[i]=='?') cnt++;
        }
        int ans=4;
        for(int i=0;i<n;i++){
            if(s[i]=='?') continue;
            if(i%4==0){
                if(s[i]!='1'){
                    ans--;
                    break;
                }
            }
            else if(i%4==1){
                if(s[i]!='0'){
                    ans--;
                    break;
                }
            }
            else if(i%4==2){
                if(s[i]!='0'){
                    ans--;
                    break;
                }
            }
            else if(i%4==3){
                if(s[i]!='1'){
                    ans--;
                    break;
                }
            }
        }
        for(int i=0;i<n;i++){
            if(s[i]=='?') continue;
            if(i%4==0){
                if(s[i]!='0'){
                    ans--;
                    break;
                }
            }
            else if(i%4==1){
                if(s[i]!='1'){
                    ans--;
                    break;
                }
            }
            else if(i%4==2){
                if(s[i]!='1'){
                    ans--;
                    break;
                }
            }
            else if(i%4==3){
                if(s[i]!='0'){
                    ans--;
                    break;
                }
            }
        }
        for(int i=0;i<n;i++){
            if(s[i]=='?') continue;
            if(i%4==0){
                if(s[i]!='1'){
                    ans--;
                    break;
                }
            }
            else if(i%4==1){
                if(s[i]!='1'){
                    ans--;
                    break;
                }
            }
            else if(i%4==2){
                if(s[i]!='0'){
                    ans--;
                    break;
                }
            }
            else if(i%4==3){
                if(s[i]!='0'){
                    ans--;
                    break;
                }
            }
        }
        for(int i=0;i<n;i++){
            if(s[i]=='?') continue;
            if(i%4==0){
                if(s[i]!='0'){
                    ans--;
                    break;
                }
            }
            else if(i%4==1){
                if(s[i]!='0'){
                    ans--;
                    break;
                }
            }
            else if(i%4==2){
                if(s[i]!='1'){
                    ans--;
                    break;
                }
            }
            else if(i%4==3){
                if(s[i]!='1'){
                    ans--;
                    break;
                }
            }
        }
        cout<<ans<<endl;      
    }
}