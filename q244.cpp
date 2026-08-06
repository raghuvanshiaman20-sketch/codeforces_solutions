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
        pair<long long , long long> p,q;
        cin>>p.first>>p.second>>q.first>>q.second;
        vector<double> a(n);
        double s=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            s+=a[i];
        }
        double x=abs(p.first-q.first),y=abs(p.second-q.second);
        x=x*x,y=y*y;
        double d=sqrt(x+y);
        sort(a.begin(),a.end());
        double maxi=max(d,a[n-1]);
        s+=d;
        if(s-maxi<maxi) cout<<"No"<<endl;
        else cout<<"Yes"<<endl;
    }
}