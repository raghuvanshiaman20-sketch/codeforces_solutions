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
        vector<vector<int>> ans(n,vector<int>(n,0));
        ans[0][0]=1;
        if(k<n||k==2*n){
            cout<<-1<<endl;
            continue;
        }
        int el=2,l=2*n-2;
        k--;
        int i=1;
        while(l>k){
            ans[i][i]=el;
            i++;
            k--;
            l-=2;
            el++;
        }
        int j=i;
        while(k>0){
            if(i<n){
                ans[0][i]=el;
                i++;
            }
            else{
                ans[j][0]=el;
                j++;
            }
            el++;
            k--;
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(ans[i][j]==0){
                    ans[i][j]=el;
                    el++;
                }
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cout<<ans[i][j]<<" ";
            }
            cout<<endl;
        }
    }
}