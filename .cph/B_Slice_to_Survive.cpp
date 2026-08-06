#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        long long n,m,a,b;
        cin>>n>>m>>a>>b;
        long long x_a=max(n-a,a-1);
        long long x_b=max(m-b,b-1);
        long long a1=n-x_a,a2=n,b1=m-x_b,b2=m;
        int cnt1=0,cnt2=0,cnt3=0,cnt4=0;
        while(a1!=1){
            if(a1%2==1) a1++;
            a1/=2;
            cnt1++;
        }
        while(a2!=1){
            if(a2%2==1) a2++;
            a2/=2;
            cnt2++;
        }
        while(b1!=1){
            if(b1%2==1) b1++;
            b1/=2;
            cnt3++;
        }
        while(b2!=1){
            if(b2%2==1) b2++;
            b2/=2;
            cnt4++;
        }
        cout<<min(cnt1+cnt4+1,cnt2+cnt3+1)<<endl;
    }
}