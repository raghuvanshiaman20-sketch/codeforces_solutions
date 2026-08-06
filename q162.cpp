#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    int f=0;
    while(t--){
        vector<int> a(7);
        for(int i=0;i<7;i++){
            cin>>a[i];
        }
        sort(a.begin(),a.end());
        int s=0;
        for(int i=0;i<7;i++){
            if(i==6){
                s+=a[i];
                continue;
            }
            s-=a[i];
        }
        cout<<s<<endl;
    }
}