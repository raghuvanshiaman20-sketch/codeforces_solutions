#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int x,y;
        cin>>x>>y;
        if(x>y||(y%2==0&&x==0)) cout<<"NO\n";
        else{
            int total=x+y;
            cout<<"YES\n";
            if((x+y)%2==0) x--;
            int j=2;
            for(int i=0;i<x;i++){
                cout<<1<<" "<<j<<endl;
                cout<<j<<" "<<j+1<<endl;
                j+=2;
            }
            while(j<=total){
                cout<<1<<" "<<j<<endl;
                j++;
            }
        }
    }
}