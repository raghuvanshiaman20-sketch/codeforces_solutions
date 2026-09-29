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
        vector<int> a(n+1);
        for(int i=1;i<=n;i++) cin>>a[i];
        vector<int> A,B,C,D;
        for(int i=1;i<=n;i++){
            if(a[i]<=n/2&&i<=n/2) A.push_back(a[i]);
            if(a[i]<=n/2&&i>n/2) B.push_back(a[i]);
            if(a[i]>n/2&&i>n/2) C.push_back(a[i]);
            if(a[i]>n/2&&i<=n/2) D.push_back(a[i]);
        }
        if(A.size()+C.size()==n||B.size()+D.size()==n){
            cout<<1<<endl;
            cout<<n<<" ";
            for(int i=1;i<=n;i++) cout<<a[i]<<" ";
            cout<<endl;
        }
        else{
            cout<<2<<endl;
            cout<<A.size()+C.size()<<" ";
            for(auto it:A) cout<<it<<" ";
            for(auto it:C) cout<<it<<" ";
            cout<<endl;
            cout<<B.size()+D.size()<<" ";
            for(auto it:D) cout<<it<<" ";
            for(auto it:B) cout<<it<<" ";
            cout<<endl;
        }
    }
}