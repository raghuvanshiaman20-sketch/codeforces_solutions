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
        vector<long long> a(n);
        int c_o=0,c_e=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]%2==1) c_o++;
            else c_e++;
        }
        if(c_o==0){
            for(int i=0;i<n;i++) cout<<0<<" ";
            cout<<endl;
        }
        else if(c_e==0){
            long long ma=0;
            for(int i=0;i<n;i++){
                if(a[i]%2==1) ma=max(ma,a[i]);
            }
            for(int i=0;i<n;i++){
                if(i%2==0) cout<<ma<<" ";
                else cout<<0<<" ";
            }
            cout<<endl;
        }
        else{
            vector<long long> ans(n);
            priority_queue<long long> pq;
            long long ma=0;
            for(int i=0;i<n;i++){
                if(a[i]%2==1) ma=max(ma,a[i]);
                else pq.push(a[i]);
            }
            ans[0]=ma;
            int j=1;
            while(!pq.empty()){
                ans[j]=ans[j-1]+pq.top();
                pq.pop();
                j++;
            }
            for(int i=j;i<n;i++) ans[i]=ans[i-2];
            if(c_o%2==0) ans[n-1]=0;
            for(int i=0;i<n;i++) cout<<ans[i]<<" ";
            cout<<endl;
        }
    }
}