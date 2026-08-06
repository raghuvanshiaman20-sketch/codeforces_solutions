#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n;
        long long c;
        cin>>n>>c;
        vector<long long> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        long long s=0;
        sort(a.begin(),a.end());
        for(int i=0,j=n-1;i<j;i++,j--){
            if(a[i]>c){
                s+=(a[i]+a[j]);
                s-=2*c;
            }
            else{
                s+=a[j];
                s-=c;
            }
        }
        if(n%2==1){
            s+=a[n/2];
            s-=c;
        }
        cout<<s<<endl;
    }
}