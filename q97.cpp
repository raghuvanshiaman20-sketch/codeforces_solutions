#include<bits/stdc++.h>
using namespace std;
const int inf=1e9;
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
        set<int> b(a.begin(),a.end());
        int l=0;
        for(auto it:b){
            if(it==l){
                l++;
            }
            else{
                break;
            }
        }
        cout<<l<<endl;
    }
}