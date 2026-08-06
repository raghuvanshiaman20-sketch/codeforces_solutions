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
        long long cnt_1=0,s=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]==1) cnt_1++;
            else{
                s+=a[i];
            }
        }
        sort(a.begin(),a.end());
        if((s+cnt_1)<3||cnt_1==n){
            cout<<0<<endl;
            continue;
        }        
        if(cnt_1==0){
            cout<<s<<endl;
        }
        else if(a[n-2]==1){
            long long p=a[n-1]/2;
            cout<<a[n-1]+min(cnt_1,p)<<endl;
        }
        else{
            long long sp_a=0;
            for(int i=0;i<n;i++){
                sp_a+=max(0,a[i]/2-1);
            }
            cout<<s+min(sp_a,cnt_1)<<endl;
        }
    }
}