#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<long long> a(n+1),b(n+1),st(n+1);
        for(int i=1;i<=n;i++){
            cin>>a[i];
        }
        a[0]=0;
        long long sum=0;
        for(int i=1;i<=n;i++){
            cin>>b[i];
            sum+=b[i];
            st[i]=sum;
        }
        st[0]=0;
        sort(a.begin()+1,a.end());
        long long score=0;
        for(int i=0;i<=n;i++){
            if(st[i]>n) break;
            else{
                score=max(score,i*a[n+1-st[i]]);
            }
        }
        cout<<score<<endl;
    }
}