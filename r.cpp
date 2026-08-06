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
        for(int i=1;i<=n;i++) cin>>h[i];

        for(int s=1;s<=n;s++){
            vector<long long> w1(n+1,0), w2(n+1,0), w(n+1,0);

            for(int i=1;i<n;i++){
                w1[((s+i-1)%n)+1]   = max(w1[((s+i-2)%n)+1],   h[((s+i-2)%n)+1]);
                w2[((s+n-i-1)%n)+1] = max(w2[((s+n-i)%n)+1],   h[((s+n-i-1)%n)+1]);
            }

            for(int i=1;i<=n;i++) w[i] = min(w1[i], w2[i]);

            cout << accumulate(w.begin()+1, w.end(), 0ll) << " ";
        }
        cout<<"\n";
    }
}