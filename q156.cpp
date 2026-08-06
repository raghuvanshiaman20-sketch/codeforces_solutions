#include <bits/stdc++.h>
using namespace std;
const long long MOD = 676767677;
int countDivisors(long long n) {
    if (n == 0) return 1; 
    int cnt = 0;
    for (long long i = 1; i * i <= n; i++) {
        if (n % i == 0) {
            cnt++;
            if (i != n / i) cnt++;
        }
    }
    return cnt;
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long x, y;
        cin >> x >> y;
        long long S;
        if (x == 0 || y == 0) {
            S = x + y;
        } else {
            S = abs(x - y);
        }
        int f = countDivisors(S);
        cout << (f % MOD) << "\n";
        for (int i = 0; i < x; i++) cout << 1 << " ";
        for (int i = 0; i < y; i++) cout << -1 << " ";
        cout << "\n";
    }
    return 0;
}