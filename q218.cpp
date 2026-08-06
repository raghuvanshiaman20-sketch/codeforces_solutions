#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);  
    cin.tie(0);                     
    cout.tie(0); 
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        string s="";
        vector<int> fib(11);
        fib[1]=1,fib[2]=2;
        for(int i=3;i<=10;i++){
            fib[i]=fib[i-1]+fib[i-2];
        }
        for(int i=0;i<m;i++){
            int w,l,h;
            cin>>w>>l>>h;
            if(w>=fib[n]&&l>=fib[n]&&h>=fib[n]){
                if(max({w,l,h})>=fib[n]+fib[n-1]){
                    s+='1';
                }
                else{
                    s+='0';
                }
            }
            else{
                s+='0';
            }
        }
        cout<<s<<endl;
    }
}