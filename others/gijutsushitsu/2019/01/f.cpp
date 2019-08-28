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

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    int n,m; cin >> n >> m;
    vector<vector<int>> a(n,vector<int>(m)), b(n,vector<int>(m));
    REP(i,n) REP(j,m) cin >> a[i][j];
    REP(i,n) REP(j,m) cin >> b[i][j];
    vector<vector<int>> dp(n+1, vector<int>(m,0));
    REP(i,n) {
        REP(j,m) {
            vector<int> tmp(m, b[i][j]);
            REP(k,m) {
                tmp[k] += dp[i][k];
                if(dp[i][k]%a[i][j]==0) continue;
                else tmp[k] += a[i][j] - (dp[i][k]%a[i][j]);
            }
            dp[i+1][j] = *min_element(ALL(tmp));
        }
    }
    int ans = *min_element(ALL(dp[n]));
    cout << ans << endl;
    return 0;
}