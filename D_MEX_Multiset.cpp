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
        vector<int> a(n);
        for(int i=0;i<n;i++) cin>>a[i];
        string s="";
        int cnt_o=0,l_o=-1;
        for(int i=0;i<n;i++){
            if(a[i]==0) cnt_o++,l_o=i;
        }
        if(cnt_o==0){
            cout<<"YES\n";
            for(int i=0;i<n;i++) s+='A';
            cout<<s<<endl;
        }
        else if(cnt_o==1) cout<<"NO\n";
        else{
            cout<<"YES\n";
            for(int i=0;i<n;i++){
                if(a[i]==0){
                    if(l_o==i) s+='B';
                    else s+='A';
                }
                else s+='C';
            }
            cout<<s<<endl;
        }
    }
}