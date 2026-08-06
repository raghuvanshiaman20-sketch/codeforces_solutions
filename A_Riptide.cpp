#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        if(a==b||b==c||c==a) cout<<0<<endl;
        else{
            int x=max({a,b,c});
            int y=min({a,b,c});
            int z=0;
            if(x==a&&y==b||x==b&&y==a) z=c;
            if(x==a&&y==c||x==c&&y==a) z=b;
            if(x==b&&y==c||x==c&&y==b) z=a;
            cout<<min(abs(z-x),abs(z-y))<<endl;
        }
    }
}