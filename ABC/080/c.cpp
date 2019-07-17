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
    int n; cin >> n;
    vector<vector<int>> f(n, vector<int> (10));
    REP(i,n) REP(j,10) cin >> f[i][j];
    vector<vector<int>> p(n,vector<int>(11));
    REP(i,n) REP(j,11) cin >> p[i][j];
    ll ans = INF; ans *= -1;
    for(int bit = 1; bit < (1<<10); ++bit) {
        vector<int> s(n, 0);
        REP(i,n) {
            REP(j,10) {
                if(bit & (1<<j)) s[i] += f[i][j];
            }
        }
        ll tmp = 0;
        REP(i,n) tmp += p[i][s[i]];
        ans = max(ans, tmp);
    }
    cout << ans << endl;
    return 0;
}