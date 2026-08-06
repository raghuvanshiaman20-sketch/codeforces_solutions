#include <bits/stdc++.h>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<long long> h(n+1,0);
        for(int i=1;i<=n;i++){
            cin>>h[i];
        }
        for(int i=1;i<=n;i++){
            vector<long long> a(n+1,0),b(n+1,0),c(n+1,0);
            long long sum=0;
            for(int j=1;j<n;j++){
                a[((j+i-1)%n)+1]=max(a[((j+i-2)%n)+1],h[((j+i-2)%n)+1]);
                b[((i+n-j-1)%n)+1]=max(b[((i+n-j)%n)+1],h[((i+n-j-1)%n)+1]);
            }
            for(int j=1;j<=n;j++){
                c[j]=min(a[j],b[j]);
            }
            for(int j=1;j<=n;j++) sum+=c[j];
            cout<<sum<<" ";
        }
        cout<<endl;
    }
}