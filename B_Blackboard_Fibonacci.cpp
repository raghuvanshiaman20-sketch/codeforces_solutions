#include <bits/stdc++.h>
using namespace std;
vector<int> fib(1000002);
int n,r;
string op(int x,int y){
    string s="";
    while(x!=0){
        if(x>=y){
            x-=y;
            s+='T';
        }
        else{
            y=y-x;
            s+='B';
        }
    }
    if(y!=1) return "";
    return s;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>r;
    fib[0]=0,fib[1]=1;
    for(int i=2;i<=(n+1);i++){
        fib[i]=min(r+1,fib[i-1]+fib[i-2]);
    }
    if(r>fib[n+1]||r<n){
        cout<<"IMPOSSIBLE";
        return 0;
    }
    if(fib[n+1]==r){
        cout<<0<<endl;
        for(int i=1;i<=n;i++){
            if(i%2==1) cout<<"T";
            else cout<<"B";
        }
        return 0;
    }
    string ans="";
    int mi=INT_MAX;
    for(int i=1;i<=r;i++){
        string s=op(i,r);
        int m=0;
        if(s.size()!=n) continue;
        reverse(s.begin(),s.end());
        for(int i=0;i<n-1;i++){
            if(s[i]==s[i+1]) m++;
        }
        if(m<mi){
            ans=s;
            mi=m;
        }
        s=op(r,i);
        m=0;
        if(s.size()!=n) continue;
        reverse(s.begin(),s.end());
        for(int i=0;i<n-1;i++){
            if(s[i]==s[i+1]) m++;
        }
        if(m<mi){
            ans=s;
            mi=m;
        }
    }
    if(ans=="") cout<<"IMPOSSIBLE"<<endl;
    else{
        cout<<mi<<endl;
        cout<<ans<<endl;
    }
}