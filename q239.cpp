#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<long long> a(n+1);
        for(int i=1;i<=n;i++){
            cin>>a[i];
        }
        long long contri=0;
        if(n%2==0){
            for(int i=2;i<=n;i+=2){
                if(i==n){
                    if(a[i-1]>a[i]) contri+=(a[i-1]-a[i]);
                }
                else{
                    if((a[i+1]+a[i-1])>a[i]){
                        long long sum=a[i+1]+a[i-1]-a[i];
                        contri+=sum;
                        a[i+1]-=(min(a[i+1],sum));
                    }
                }
            }
        }
        else{
            for(int i=2;i<=n;i+=2){
                if((a[i+1]+a[i-1])>a[i]){
                    long long sum=a[i+1]+a[i-1]-a[i];
                    contri+=sum;
                    a[i+1]-=(min(a[i+1],sum));
                }
            }
        }
        cout<<contri<<endl;
    }
}