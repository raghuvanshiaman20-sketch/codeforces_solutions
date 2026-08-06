#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }

        if(n>1){
        set<int> s(a.begin(),a.end());
        int c= s.size();
        int mx=1000;
        for(int i=0;i<n;i++){
            if(a[i]>=c){
                mx=min(mx,a[i]);
            }
        }
        cout<<mx<<endl;
        }
        else{
            cout<<a[0]<<endl;
        }
    }

}