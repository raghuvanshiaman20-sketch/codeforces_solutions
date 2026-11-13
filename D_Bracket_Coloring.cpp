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
        vector<int> c(n);
        int b=0,fl1=0,fl2=0;
        for(int i=0;i<n;i++){
            if(s[i]=='('){
                b++;
                if(b>0){
                    c[i]=1;
                    fl2=1;
                }
                else{
                    c[i]=2;
                    fl1=1;
                }
            }
            if(s[i]==')'){
                b--;
                if(b>=0){
                    c[i]=1;
                    fl2=1;
                }
                else{
                    c[i]=2;
                    fl1=1;
                }
            }
        }
        if(b==0){
            if(fl1==1&&fl2==1){
                cout<<2<<endl;
                for(int i=0;i<n;i++){
                    cout<<c[i]<<" ";
                }
            }
            else{
                cout<<1<<endl;
                 for(int i=0;i<n;i++){
                    cout<<1<<" ";
                }
            }
            
            cout<<endl;
        }
        else{
            cout<<-1<<endl;
        }
    }
}