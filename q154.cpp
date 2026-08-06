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
        if(n<3){
            int i=0;
            while(i<n){
                cout<<n<<" ";
                i++;
            }
            cout<<endl;
        }
        else{
            int i=0;
            while(i<n){
                cout<<2<<" ";
                i++;
            }
            cout<<endl;
        }
    }
}