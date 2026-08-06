#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n,k,b,s;
        cin>>n>>k>>b>>s;
        vector<long long> v(n,0);
        if(s<k*b||s>(k*b+n*(k-1))){
            cout<<-1<<endl;
        }
        else{
            long long i=0;
            v[0]=k*b;
            s-=(k*b);
            for(int i=0;i<n&&s>0;i++){
                long long a=min(s,k-1);
                v[i]+=a;
                s-=a;
            }
            for(long long j=0;j<n;j++){
                cout<<v[j]<<" ";
            }
            cout<<endl;
        }
        
    }
}