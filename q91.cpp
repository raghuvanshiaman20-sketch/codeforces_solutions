#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n);
        if(n%2!=0){
            a[n/2]=1;
            int j=2;
            for(int i=0;i<(n/2);i++,j++){
                a[i]=j;
            }
            for(int i=(n/2)+1;i<n;i++,j++){
                a[i]=j;
            }
        }
        else{
            for(int i=0,j=1;i<n;i++,j++){
                a[i]=j;
            }
        }
        for(auto it: a){
            cout<<it<<" ";
        }
        cout<<endl;
    }
}