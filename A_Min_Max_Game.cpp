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
        int cnt_1=0,cnt_0=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]==1) cnt_1++;
            else cnt_0++;
        }
        if(cnt_1>=cnt_0) cout<<"Bessie\n";
        else cout<<"Elsie\n";
    }
}