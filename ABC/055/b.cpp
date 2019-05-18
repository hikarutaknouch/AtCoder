#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    long long ans = 1;
    int mod = 1000000007;
    for(int i = 1; i <= n; i ++) {
        ans *= i;
        ans %= mod;
    }
    cout << ans << endl;
    return 0;
}