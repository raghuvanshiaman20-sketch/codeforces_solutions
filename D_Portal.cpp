#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n,x,y;
        cin>>n>>x>>y;
        vector<int> a(n+1);
        for(int i=1;i<=n;i++) cin>>a[i];
        if(x==0&&y==n){
            int s=1;
            for(int i=2;i<=n;i++){
                if(a[i]<a[s]) s=i;
            }
            for(int i=s;i<=n;i++) cout<<a[i]<<" ";
            for(int i=1;i<s;i++) cout<<a[i]<<" ";
            cout<<endl;
        }
        else{
            int s=x+1;
            for(int i=s;i<=y;i++){
                if(a[i]<a[s]) s=i;
            }
            int j=1;
            for(;j<=n;j++){
                if(j>=x+1&&j<=y) continue;
                if(a[j]>a[s]){
                    break;
                }
            }
            for(int i=1;i<j;i++){
                if(i>=x+1&&i<=y) continue;
                cout<<a[i]<<" ";
            }
            for(int i=s;i<=y;i++) cout<<a[i]<<" ";
            for(int i=x+1;i<s;i++) cout<<a[i]<<" ";
            for(int i=j;i<=n;i++){
                if(i>=x+1&&i<=y) continue;
                cout<<a[i]<<" ";
            }
            cout<<endl;
        }
    }
}