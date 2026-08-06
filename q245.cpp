#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n,c;
        cin>>n>>c;
        vector<int> a(n),b(n);
        long long t1=0,t2=0;
        int fl=0;
        for(int i=0;i<n;i++) cin>>a[i];
        for(int i=0;i<n;i++){
            cin>>b[i];
            if(a[i]<b[i]){
                fl=1;
            }
            else t1+=(a[i]-b[i]);
        }
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        int fl2=0;
        for(int i=0;i<n;i++){
            if(a[i]<b[i]){
                fl2=1;
                break;
            }
            else t2+=(a[i]-b[i]);
        }
        t2+=c;
        if(fl2==1) cout<<-1<<endl;
        else if(fl==1){
            cout<<t2<<endl;
        }
        else cout<<min(t1,t2)<<endl;
    }
}