#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,s,x;
        cin>>n>>s>>x;
        int total=0;
        vector<int> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
            total+=a[i];
        }
        int dif=s-total;
        if(dif>=0){
            if(dif%x==0){
                cout<<"YES"<<endl;
            }
            else cout<<"NO"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }

    }
}