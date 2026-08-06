#include <bits/stdc++.h>
using namespace std;
vector<int> v(200001);
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n),b(n);
        int fl=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=n-1;i>=0;i--){
            v[a[i]]++;
            b[i]=v[a[i]];
        }
        int el=a[0],cnt=1,stan=b[0];
        for(int i=1;i<n;i++){
            if(b[i]<stan&&a[i]!=a[0]) stan=b[i];
            if(b[i]<=stan&&a[i]==a[0]){
                cnt++;
                stan=b[i];
            }
        }
        cout<<cnt<<endl;
        for(auto it:a) v[it]=0;
    }
}