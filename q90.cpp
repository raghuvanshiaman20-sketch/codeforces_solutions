#include<bits/stdc++.h>
using namespace std;
const int mod=1e9+7;
const int inf=1e9;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n, x;
    cin >> n >> x;
    vector<int> a(n), b(n), c(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i] >> b[i] >> c[i];
    }
    int start = 0;
    int mx = -inf;
    for (int i = 0; i < n; ++i) {
        mx = max(mx, a[i] * b[i] - c[i]);
        start += a[i] * (b[i] - 1);
    }
    x -= start;
    if (x <= 0) {
        cout << 0<<endl;
        continue;
    }
    if (mx <= 0) {
        cout << -1<<endl;
        continue;
    }
    cout << (x + mx - 1) / mx<<endl;
    }
}