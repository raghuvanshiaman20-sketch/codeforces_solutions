#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> v(n+1),o(n+1),t(n+1),th(n+1);
        for(int i=1;i<=n;i++){
            cin>>v[i];
            if(v[i]==1){
                o[i]=o[i-1]+1;
                t[i]=t[i-1];
                th[i]=th[i-1];
            }
            else if(v[i]==2){
                o[i]=o[i-1];
                t[i]=t[i-1]+1;
                th[i]=th[i-1];
            }
            else{
                o[i]=o[i-1];
                t[i]=t[i-1];
                th[i]=th[i-1]+1;
            }
        }
        int fl1=0,fl2=0,idx=0;
        for(int i=1;i<n;i++){
            if(o[i]>=(t[i]+th[i])&&fl1==0){
                fl1=1;
                if(o[i]>(t[i]+th[i])){
                    if(th[i+1]-th[i]==1){
                        idx=i+1;
                        continue;
                    }
                }
                idx=i;
                continue;
            }
            if((fl1==1)&&((o[i]-o[idx]+t[i]-t[idx])>=(th[i]-th[idx]))&&(o[i]-o[idx]+t[i]-t[idx]!=0)){
                fl2=1;
                break;
            }
        }
        if(fl2==1) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}