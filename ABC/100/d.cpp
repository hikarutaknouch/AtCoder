#include <bits/stdc++.h>
#define REP(i, n) for(int i = 0; i < n; ++i)
#define REPP(i, n) for(int i = 1; i <= n; ++i)
#define REPR(i, n) for(int i = n-1; i >= 0; --i)
#define FOR(i, m, n) for(int i = m; i < n; ++i)
#define ALL(v) v.begin(), v.end()
#define UNIQUE(v) v.erase(unique(v.begin(), v.end()), v.end());
using namespace std;
typedef long long ll;
typedef pair<ll, ll> P;
const ll MOD = 1000000007;
const ll INF = 1000000000;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    int n,m; cin >> n >> m;
    vector<ll> x(n), y(n), z(n);
    REP(i,n) cin >> x[i] >> y[i] >> z[i];
    ll ans=0, tmp;
    REP(bit, (1<<3)) {
        vector<ll> v(n);
        REP(i,n) {
            tmp = 0;
            if(bit & 1<<0) tmp += x[i]; else tmp -= x[i];
            if(bit & 1<<1) tmp += y[i]; else tmp -= y[i];
            if(bit & 1<<2) tmp += z[i]; else tmp -= z[i];
            v[i] = tmp;
        }
        sort(ALL(v), greater<ll>());
        ll sum = 0;
        REP(i,m) sum += v[i];
        ans = max(ans, sum);
    }
    cout << ans << endl;
    return 0;
}