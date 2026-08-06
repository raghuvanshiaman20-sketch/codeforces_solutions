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
        vector<int> a(n),b(n);
        set<int> s;
        int fl=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            s.emplace(a[i]);
            b[i]=s.size();
        }
        s.clear();
        int cnt=0,k=n-1;
        for(int i=n-1;i>=0;i--){
            s.emplace(a[i]);
            if(s.size()==b[k]){
                cnt++;
                s.clear();
                k=i-1;
            }
        }
        cout<<cnt<<endl;
    }
}