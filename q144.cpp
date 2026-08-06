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
        if(n>2){
            int cnt=1;
            int maxi=a[0];
            for(int i=1;i<n;i++){
                if(a[i]>=maxi){
                    cnt++;
                    maxi=a[i];
                }
                else{
                    continue;
                }
            }
            cout<<cnt<<endl;
        }
    else{
        if(a[0]>a[1]){
            cout<<1<<endl;
        }
        else cout<<2<<endl;
    }
    }
}
