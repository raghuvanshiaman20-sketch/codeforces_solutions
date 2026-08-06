#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int> a(n);  
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a.begin(),a.end());
        set<int> s(a.begin(),a.end());
        int i=0,f=0;
        for(auto it: s){
            if(it!=i){
                f=1;
                break;
            }
            i++;
        }
        if(f&&(i<k-1)) cout<<i<<endl;
        else if(s.size()<k-1){
            cout<<s.size()<<endl;
        }
        else{
            cout<<k-1<<endl;
        }
    }
}