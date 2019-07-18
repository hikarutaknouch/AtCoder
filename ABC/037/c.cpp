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
const ll INF = 1000000000;

int main() {
    int n,k; cin >> n >> k;
    vector<ll> a(n), s(n+1);;
    s[0] = 0;
    REP(i,n) {
        cin >> a[i];
        s[i+1] = a[i] + s[i];
    }
    ll ans = s[k];
    FOR(i,k+1,n+1) {
        ans += s[i] - s[i-k];
    }
    cout << ans << endl;
    return 0;
}