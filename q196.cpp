#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n),b(n),bw(n,0),aw(n,0);
        int cnt=1;
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]==cnt){
                aw[i]=1;
                cnt++;
            }
        }
        cnt=1;
        for(int i=0;i<n;i++){
            cin>>b[i];
            if(b[i]==cnt){
                bw[i]=1;
                cnt++;
            }
        }
        vector<int> pr(n,0);
        for(int i=0;i<n;i++){
            if(aw[i]==0&&bw[i]==0){
                pr[i]=1;
            }
            else{
                if(aw[i]==1&&bw[i]==1&&a[i]==b[i]) pr[i]==1;
            }
        }
        long long total=0,ct=0;
        for(int i=0;i<n;i++){
            if(pr[i]==1){
                ct++;
            }
            else{
                total+=((ct*(ct+1))/2);
                ct=0;
            }
        }
        if(ct>0)  total+=((ct*(ct+1))/2);
        cout<<total<<endl;
    }
}