#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> c(n);
        int fl=0,cnt=0;
        for(int i=0;i<n;i++){
            cin>>c[i];
            if(c[i]>2) fl=1;
            if(c[i]==2) cnt++;
        }
        if(cnt>=2||fl==1) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}