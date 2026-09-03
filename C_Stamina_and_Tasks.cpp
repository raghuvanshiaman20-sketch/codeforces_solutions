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
        double sc=0.0;
        vector<double> c(n+1),p(n+1);
        for(int i=1;i<=n;i++){
            cin>>c[i]>>p[i];
        }
        for(int i=n;i>=1;i--){
            double mul=1.0-p[i]/100.0;
            sc=max(sc,c[i]+(mul)*sc);
        }
        cout<<fixed<<setprecision(10)<<sc<<endl;
    }
}