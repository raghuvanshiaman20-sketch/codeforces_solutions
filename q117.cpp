#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        int c=0;
        for(long long i=n;i<=n+90;i++){
            long long d=0,x=i;
            while(x){
                int dig=x%10;
                d+=dig;
                x/=10;
            }
            if(i-d==n) c++;
        }
        cout<<c<<endl;
    }
    return 0;
}