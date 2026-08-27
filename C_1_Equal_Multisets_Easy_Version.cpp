#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n,k,fl=0;
        cin>>n>>k;
        vector<int> a(n),b(n),v(n+1);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            cin>>b[i];
            if(b[i]!=-1){
                v[b[i]]++;
                if(v[b[i]]==2) fl=1;
            }
        }
        if(n>=2*k){
            for(int i=0;i<n;i++){
                if(b[i]==-1||a[i]==b[i]) continue;
                else{
                    fl=1;
                    break;
                }
            }
        }
        else{
            for(int i=0;i<n-k;i++){
                if(b[i]==-1||a[i]==b[i]) continue;
                else{
                    fl=1;
                    break;
                }
            }
            for(int i=n-1;i>=k;i--){
                if(b[i]==-1||a[i]==b[i]) continue;
                else{
                    fl=1;
                    break;
                }
            }
            int cnt_o=0;
            vector<int> ma(n+1,0);
            for(int i=n-k;i<k;i++){
                if(b[i]==-1) cnt_o++;
                else{
                    ma[b[i]]++;
                }
            }
            for(int i=n-k;i<k;i++){
                if(ma[a[i]]>0) continue;
                else{
                    cnt_o--;
                    if(cnt_o<0){
                        fl=1;
                        break;
                    }
                }
            }
        }
        if(fl) cout<<"NO\n";
        else cout<<"YES\n";
    }
}
