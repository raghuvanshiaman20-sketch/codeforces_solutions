#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        vector<long long> a(n+1),b(m+1);
        for(int i=1;i<=n;i++) cin>>a[i];
        for(int i=1;i<=m;i++) cin>>b[i];
        sort(b.begin(),b.end());
        reverse(b.begin(),b.end());
        long long t=0,s1=0,s2=0;
        int j=0,cnt=0;
        int k;
        for(int z=n;z>=1;z--){
            if(b[j]<z){
                t+=a[z];
            }
            else{
                k=z;
                break;
            }
        }
        for(int i=k;i>=1;i--){
            if(b[j]==i){
                if(j!=m) j++;
                if(s1>s2){
                    if(cnt%2==0) t+=s1;
                    else t+=s1,cnt++;
                }
                else{
                    if(cnt%2==1) t+=s2;
                    else t+=s2,cnt++;
                }
                s1=a[i],s2=-a[i];
                continue;
            }
            s1+=a[i];
            s2-=a[i];
        }
        if(s1>s2){
            if(cnt%2==0) t+=s1;
            else t+=s1,cnt++;
        }
        else{
            if(cnt%2==1) t+=s2;
            else t+=s2,cnt++;
        }
        cout<<t<<endl;
    }
}