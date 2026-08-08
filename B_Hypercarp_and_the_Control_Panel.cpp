#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++) cin>>a[i];
        if(n==1) cout<<1<<endl;
        else if(n==2){
            if(a[0]==a[1]) cout<<1<<endl;
            else cout<<2<<endl;
        }
        else{
            int adj=0;
            for(int i=1;i<n;i++){
                if(a[i]==a[i-1]) adj++;
            }
            if(adj==0) cout<<n<<endl;
            else{
                int cnt=1;
                vector<int> u,s;
                u.push_back(a[0]);
                for(int i=1;i<n;i++){
                    if(a[i]==a[i-1]){
                        cnt++;
                    }
                    else{
                        s.push_back(cnt);
                        cnt=1;
                        u.push_back(a[i]);
                    }
                }
                s.push_back(cnt);
                int t_u=u.size();
                int ans=u.size();
                for(int i=0;i<t_u-1;i++){
                    if(s[i]>=2&&s[i+1]>=2) ans=max(ans,t_u+2);
                }
                for(int i=0;i<t_u;i++){
                    if(s[i]>=2){
                        if(i>0&&(i<2||u[i-2]!=u[i])) {
                            ans=max(ans,t_u+1);
                        }
                        if(i+1<t_u&&(i+2==t_u||u[i+2]!=u[i])){
                            ans=max(ans,t_u+1);
                        }
                    }
                }
                cout<<ans<<endl;
            }
            
        }
    }
}