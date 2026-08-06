#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m,l,r;
        cin>>n>>m>>l>>r;
        int x=n-m;
        while((r>0)&&(x>0)){
            x--;
            r--;
        }
        while((l<0)&&(x>0)){
            x--;l++;
        }
        cout<<l<<" "<<r<<endl;
    }
}