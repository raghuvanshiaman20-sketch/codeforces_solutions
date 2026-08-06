#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);  
    cin.tie(0);                     
    cout.tie(0); 
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        long long a,b,c,d;
        long long op0=0,op1=0;
        for(int i=0;i<n;i++){
            cin>>a>>b>>c>>d;
            if(b>d){
                op1+=(b-d+a);
            }
            else op0+=max(0LL,a-c);
        }
        cout<<op1+op0<<endl;
    }
}