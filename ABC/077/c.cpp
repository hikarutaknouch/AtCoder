#include <bits/stdc++.h>
#define REP(i, n) for(int i = 0; i < n; ++i)
#define REPP(i, n) for(int i = 1; i <= n; ++i)
#define REPR(i, n) for(int i = n; i >= 0; --i)
#define FOR(i, m, n) for(int i = m; i < n; ++i)
#define ALL(v) v.begin(), v.end()
#define UNIQUE(v) v.erase(unique(v.begin(), v.end()), v.end());
using namespace std;
typedef long long ll;
typedef pair<ll, ll> p;
const ll MOD = 1000000007;

int main() {
    int n; cin >> n;
    vector<ll> a(n), b(n), c(n);
    REP(i,n) cin >> a[i];
    REP(i,n) cin >> b[i];
    REP(i,n) cin >> c[i];
    sort(ALL(a)); sort(ALL(b)); sort(ALL(c));
    ll ans = 0;
    REP(i,n) {
        ll ab = lower_bound(ALL(a), b[i]) - a.begin();
        ll bc = c.end() - upper_bound(ALL(c), b[i]);
        ans += ab*bc;
    }
    cout << ans << endl;
    return 0;
}