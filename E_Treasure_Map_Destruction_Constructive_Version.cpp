#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++) cin>>a[i];
        vector<int> r(n+1);
        for(int i=0;i<n;i++){
            if(a[i]>0){
                int le=max(0,i-a[i]+1);
                int ri=min(n-1,i+a[i]-1);
                r[le]++,r[ri+1]--;
            }
        }
        int cur=0;
        vector<int> v(n);
        for(int i=0;i<n;i++){
            cur+=r[i];
            v[i]=(cur==0);
        }
        int f=0;
        for(int i=0;i<n;i++){
            if(a[i]==0&&v[i]==0){
                f=1;
                break;
            }
        }
        for(int i=0;i<n;i++){
            if(a[i]>0){
                int f2=1;
                if(i+a[i]<n&&v[i+a[i]]==1) f2=0;
                if(i-a[i]>=0&&v[i-a[i]]==1) f2=0;
                if(f2){
                    f=1;
                    break;
                }
            }
        }
        if(f) cout<<-1<<endl;
        else{
            string s="";
            for(int i=0;i<n;i++){
                if(v[i]==1) s+='1';
                else s+='0';
            }
            cout<<s<<endl;
        }
    }
}