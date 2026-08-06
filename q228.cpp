#include <bits/stdc++.h>
using namespace std;
int a[5001][5001],b[5001][5001],c[5001][5001];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        for(int i=1;i<=n;i++){
            cin>>a[1][i];
        }
        for(int i=1;i<=n;i++){
            cin>>b[1][i];
        }
        for(int i=1;i<=n;i++){
            cin>>c[1][i];
        }
        for(int i=2;i<=n;i++){
            for(int j=1;j<=n;j++){
                if(j==n){
                    b[i][j]=b[i-1][1];
                    c[i][j]=c[i-1][1];
                }
                else{
                    b[i][j]=b[i-1][j+1];
                    c[i][j]=c[i-1][j+1];
                }
            }
        }
        int cnt1=0,cnt2=0;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                if(a[1][j]>=b[i][j]){
                    cnt1++;
                    break;
                }
            }
        }
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                if(b[1][j]>=c[i][j]){
                    cnt2++;
                    break;
                }
            }
        }
        cout<<1ll*n*(n-cnt1)*(n-cnt2)<<endl;    
    }
}