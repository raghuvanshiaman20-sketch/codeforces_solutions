#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<string> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        string s=arr[0];
        for(int i=1;i<n;i++){
            s=min(s+arr[i],arr[i]+s);
        }
        cout<<s<<endl;
    }
}