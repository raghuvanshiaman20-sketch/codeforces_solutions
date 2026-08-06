#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        vector<int> a(n+1);
        for(int i=1;i<=n;i++){
            cin>>a[i];
        }
        int cnt=1,maxi=0;
        for(int i=2;i<=n;i++){
            if(a[i]==a[i-1]){
                cnt++;
            }
            else{
                maxi=max(maxi,cnt);
                cnt=1;
            }
        }
        maxi=max(maxi,cnt);
        if(maxi>=m){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
    }
}