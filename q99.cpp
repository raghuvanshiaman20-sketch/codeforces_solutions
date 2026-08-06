#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,q;
        cin>>n>>q;
        string s;
        cin>>s;
        vector<int> a(q);
        for(int k=0;k<q;k++){
             cin>>a[k];
        }
        int b=0;
        for(int i=0;i<n;i++){
            if(s[i]=='B'){
                b=1;
            }
        }
        if(b==0){
            for(int i=0;i<q;i++){
                cout<<a[i]<<endl;
            }
            continue;
        }
        else{
           for(int i=0;i<q;i++){
            int ans=0,j=0;
            while(a[i]){
                if(s[j]=='A') a[i]--;
                else a[i]/=2;
                j++;ans++;
                j%=n;
            }
            cout<<ans<<endl;
           }
            
        }
    }
}