#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while (t--){
        long long n;
        cin >> n;
        vector<int> p(n),a(n),pos(n+1);
        for(int i=0;i<n;i++){
            cin>>p[i];
            pos[p[i]]=i;
        }
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int f=0;
        int init=-1;
        for(int i=0;i<n;i++){
            if(init>pos[a[i]]){
                f=1;
                break;
            }
            init=pos[a[i]];
        }
        if(f) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
}