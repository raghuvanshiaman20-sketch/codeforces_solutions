#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long p,q;
        cin>>p>>q;
        long long n,m;
        int f=0;
        for(long long i=1;i<=sqrt(p/2+q);i++){
            double k=(p+2*q-i);
            k/=(2*i+1);
            if(k>0&&(k==int(k))){
                n=i;
                m=k;
                if(p>=abs(m-n)){
                    f=1;
                    break;
                }
            }
        }
        if(f) cout<<n<<" "<<m<<endl;
        else cout<<-1<<endl;
    }
}