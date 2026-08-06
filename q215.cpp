#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);  
    cin.tie(0);                     
    cout.tie(0); 
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<long long> a(n+1),suf(n+2),pre(n+1);
        pre[0]=0;
        for(int i=1;i<=n;i++){
            cin>>a[i];
            pre[i]=pre[i-1]+abs(a[i]);
        }
        suf[n+1]=0;
        for(int i=n;i>0;i--){
            suf[i]=suf[i+1]+a[i];
        }
        suf[0]=0;
        int f=0;
        long long idx=-1,sum=suf[1];
        for(int i=1;i<=n;i++){
            if(a[i]>0){
                if(sum<(pre[i-1]+suf[i+1]-a[i])){
                    idx=i;
                    sum=pre[i-1]+suf[i+1]-a[i];
                }
            }
        }
        vector<int> v;
        int cnt=0;
        if(idx==-1){
            cout<<"0"<<endl;
            cout<<endl;
            continue;
        }
        for(int i=idx-1;i>0;i--){
            if(a[i]<0){
                if(cnt%2==1){
                    v.push_back(i);
                    cnt++;
                }
                else continue;
            }
            else{
                if(cnt%2==0){
                    v.push_back(i);
                    cnt++;
                }
                else continue;
            }
        }
        v.push_back(idx);
        cout<<v.size()<<endl;
        for(auto it: v){
            cout<<it<<" ";
        }
        cout<<endl;
    }
}