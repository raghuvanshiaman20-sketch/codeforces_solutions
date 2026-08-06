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
        int m[n][k];
        int big=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<k;j++){
                cin>>m[i][j];
                big=max(m[i][j],big);
            }
        }
        vector<int> r(n),c(k);
        for(int i=0;i<n;i++){
            int cnt=0;
            for(int j=0;j<k;j++){
                if(m[i][j]==big){
                    cnt++;
                }
            }
            r[i]=cnt;
        }
        for(int i=0;i<k;i++){
            int cnt=0;
            for(int j=0;j<n;j++){
                if(m[j][i]==big){
                    cnt++;
                }
            }
            c[i]=cnt;
        }
        int val_r=0,val_c=0,val_ri,val_ci;
        for(int i=0;i<n;i++){
            if(r[i]>1){
                val_r++;
                val_ri=i;
            }
        }
        for(int j=0;j<k;j++){
            if(c[j]>1){
                val_c++;
                val_ci=j;
            }
        }
        if(val_r>1||val_c>1) cout<<big<<endl;
        else if(val_r==1||val_c==1){
            if(val_r==1&&val_c==1){
                int fl=0;
                for(int i=0;i<n;i++){
                    if(i==val_ri) continue;
                    for(int j=0;j<k;j++){
                        if(j==val_ci) continue;
                        if(m[i][j]==big){
                            fl=1;
                        }
                    }
                }
                if(fl) cout<<big<<endl;
                else cout<<big-1<<endl;
            }
            else if(val_r==1){
                int x=0;
                for(int j=0;j<k;j++){
                    if(c[j]==1&&m[val_ri][j]!=big) x++;
                }
                if(x>1) cout<<big<<endl;
                else cout<<big-1<<endl;
            }
            else{
                int x=0;
                for(int i=0;i<n;i++){
                    if(r[i]==1&&m[i][val_ci]!=big) x++;
                }
                if(x>1) cout<<big<<endl;
                else cout<<big-1<<endl;
            }
        }
        else{
            int cnt1=0,cnt2=0;
            for(int i=0;i<n;i++){
                if(r[i]==1) cnt1++;
            }
            for(int i=0;i<k;i++){
                if(c[i]==1) cnt2++;
            }
            if(cnt1>2||cnt2>2) cout<<big<<endl;
            else cout<<big-1<<endl;
        }
    }
}