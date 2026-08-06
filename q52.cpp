#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        long long m;
        cin>>n>>m>>k;
        int l=0,r=0;
        int a=n-k;
        int b=k-1;
        while(m--){
            int c=max(a,b);
            if(c==a){
                m-=r;
                r++;
                a--;
            }
            else if(c==b){
                m-=l;
                l++;
                b--;
            }
            if(c==0){
                break;
            }
        }
        cout<<r+l-1<<endl;
    }
}