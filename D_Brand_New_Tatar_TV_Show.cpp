#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int> a(n),b(n+1);
        int cnt=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            b[a[i]]++;
            if(b[a[i]]==1) cnt++;
        }
        sort(a.begin(),a.end());
        if(b[a[n-1]]%2==0) cout<<"YES\n";
        else if(cnt==1){
            if(b[a[0]]%2==0) cout<<"YES\n";
            else cout<<"NO\n";
        }
        else{
            int fl=0;
            for(int i=0;i<n;i++){
                if(b[a[i]]%2==0){
                    if(i==n-b[a[i]]){
                        cout<<"YES\n";
                        fl=1;
                        break;
                    }
                    else if(a[i+b[a[i]]]-a[i]>k){
                        cout<<"YES\n";
                        fl=1;
                        break;
                    }
                }
                else if(i>0){
                    if(a[i]!=a[i-1]){
                        if(a[i]-a[i-1]<=k&&(i==n-b[a[i]])){
                            cout<<"YES\n";
                            fl=1;
                            break;
                        }
                        else if(a[i]-a[i-1]<=k&&a[i+b[a[i]]]-a[i]>k){
                            cout<<"YES\n";
                            fl=1;
                            break;
                        }
                    }
                }
            }
            if(fl) continue;
            else{
                cout<<"NO\n";
            }
        }
    }
}