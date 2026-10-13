#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        if(b>a+1) cout<<-1<<endl;
        else if(b==a+1) cout<<b<<endl;
        else if(a==b) cout<<a<<endl;
        else {
            if((abs(a-b)%2==0)) cout<<a<<endl;
            else cout<<a+1<<endl;
        }
    }
}