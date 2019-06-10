#include <bits/stdc++.h>
#define REP(i, n) for(int i = 0; i < n; i++)
#define REPP(i, n) for(int i = 2; i < n; i++)

using namespace std;

typedef long long ll;
const ll MOD = 1000000007;

int main() {
    int n, m; cin >> n >> m;
    vector<ll> a(n+1, 1);
    REP(i,m) {
        int index; cin >> index;
        a[index] = 0;
    }
    vector<ll> dp(n+1, 0);
    dp[0] = 1;
    dp[1] = 1;
    REPP(i,n+1) {
        if(a[i-1]) dp[i] += dp[i-1];
        if(a[i-2]) dp[i] += dp[i-2];
        dp[i] %= MOD;
    }
    cout << dp[n] << endl;
    return 0;
}