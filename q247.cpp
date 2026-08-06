#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        long long pop_count=0;
        long long num=1;
        long long l=0;
        while(n>0){
            if(n>=(k*num)){
                l=k;
                n-=k*num;
            }
            else{
                l=n/num;
                if(l==0) n=0;
                else n-=(num*l);
            }
            num=num<<1;
            pop_count+=l;
        }
        cout<<pop_count<<endl;
    }
}