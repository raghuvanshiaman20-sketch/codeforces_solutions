#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long a,b,c,m;
        cin>>a>>b>>c>>m;
        long long wa=0,wb=0,wc=0;
        wa=(m/a)*6;
        wb=(m/b)*6;
        wc=(m/c)*6;
        long long hcfab=__gcd(a,b);
        long long hcfbc=__gcd(b,c);
        long long hcfca=__gcd(a,c);
        long long lcmab=a*b/hcfab;
        long long lcmbc=b*c/hcfbc;
        long long lcmac=c*a/hcfca;
        wa-=(m/lcmab)*3;
        wa-=(m/lcmac)*3;
        wb-=(m/lcmab)*3;
        wb-=(m/lcmbc)*3;
        wc-=(m/lcmac)*3;
        wc-=(m/lcmbc)*3;
        long long hcfabc=__gcd(lcmab,c);
        long long lcmabc=lcmab*c/hcfabc;
        wa+=(m/lcmabc)*2;
        wb+=(m/lcmabc)*2;
        wc+=(m/lcmabc)*2;
        cout<<wa<<" "<<wb<<" "<<wc<<endl;
    }
}
