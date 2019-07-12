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

ll cs(vector<ll> s, vector<ll> t, int n, int m) {
    vector<vector<ll>> dp(n+1, vector<ll>(m+1));
    dp[0][0] = 1;
    REP(i,n+1) {
        REP(j,m+1) {
            if(i>0 && j>0 && s[i-1]==t[j-1]) dp[i][j] += dp[i-1][j-1];
            if(i>0) dp[i][j] += dp[i-1][j];
            if(j>0) dp[i][j] += dp[i][j-1];
            if(i>0 && j>0) dp[i][j] += MOD - dp[i-1][j-1];
            dp[i][j] %= MOD;
        }
    }
    return dp[n][m];
}

int main() {
    int n,m; cin >> n >> m;
    vector<ll> s(n), t(m);
    REP(i,n) cin >> s[i];
    REP(i,m) cin >> t[i];
    ll ans = cs(s,t,n,m);
    cout << ans << endl;
    return 0;
}