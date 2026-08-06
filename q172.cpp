#include <bits/stdc++.h>
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
        sort(a.begin(),a.end());
        reverse(a.begin(),a.end());
        int f=0;
        for(int i=0;i<(n-1);i++){
            if(a[i]==a[i+1]){
                f=1;
                break;
            }
        }
        if(f){
            cout<<-1<<endl;
        }
        else{
            for(int i=0;i<n;i++){
                cout<<a[i]<<" ";
            }
            cout<<endl;
        }
    }
}