#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll m=998244353;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int x,y,z;
        cin>>x>>y>>z;
        string s="";
        int t=x+y+z;
        if(x>=y&&x>=z){
            while(t>0){
                s+='P';
                t--;
            }
        }
        else if(y>=x&&y>=z){
            while(t>0){
                s+='R';
                t--;
            }
        }
        else{
            while(t>0){
                s+='S';
                t--;
            }
        }
        cout<<s<<endl;
    }
}