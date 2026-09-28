#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n;
        long long d;
        cin>>n>>d;
        vector<long long> a(n);
        for(int i=0;i<n;i++) cin>>a[i];
        sort(a.begin(),a.end());
        int fl=0;
        if(n%2==0){
            for(int i=0;i<n-1;i+=2){
                if(a[i+1]-a[i]>d){
                    fl=1;
                    break;
                }
            }
            if(fl) cout<<"NO\n";
            else cout<<"YES\n";
        }
        else{
            for(int i=0;i<n-1;i+=2){
                if(a[i+1]-a[i]>d){
                    fl++;
                    if(i!=n-2){
                        i++;
                        if(a[i+1]-a[i]>d) fl++;
                    }
                }
            }
            if(fl>=2) cout<<"NO\n";
            else cout<<"YES\n";
        }
    }
}