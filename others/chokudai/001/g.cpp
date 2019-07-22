#include <bits/stdc++.h>
#define REP(i, n) for(int i = 0; i < n; ++i)
#define REPP(i, n) for(int i = 1; i <= n; ++i)
#define REPR(i, n) for(int i = n; i >= 0; --i)
#define FOR(i, m, n) for(int i = m; i < n; ++i)
#define ALL(v) v.begin(), v.end()
#define UNIQUE(v) v.erase(unique(v.begin(), v.end()), v.end());
using namespace std;
typedef long long ll;
typedef pair<ll, ll> P;
const ll MOD = 1000000007;
const ll INF = 1000000000;

int digit(int x) {
    int res = 0;
    while (x>0) {
        res ++;
        x /= 10;
    }
    return res;
}

int main() {
    int n; cin >> n;
    vector<ll> a(n);
    REP(i,n) cin >> a[i];
    ll ans = a[0];
    REPP(i,n-1) {
        int d = digit(a[i]);
        REP(j,d) ans *= 10;
        ans += a[i];
        ans %= MOD;
    }
    cout << ans << endl;
    return 0;
}