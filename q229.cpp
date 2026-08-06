#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
        long long w,h,d;
        cin>>w>>h>>d;
        long long n;
        cin>>n;
        long long a,b,c;
        a=__gcd(w,n);
        n/=a;
        b=__gcd(n,h);
        n/=b;
        c=__gcd(d,n);
        n/=c;
        if(n==1) cout<<a-1<<" "<<b-1<<" "<<c-1<<endl;
        else cout<<-1<<endl;
}