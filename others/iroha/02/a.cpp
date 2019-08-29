#include <bits/stdc++.h>
#define REP(i, n) for(int i = 0; i < n; i++)
#define REPP(i, n) for(int i = 1; i <= n; i++)
#define REPR(i, n) for(int i = n; i >= 0; i--)
#define FOR(i, m, n) for(int i = m; i < n; i++)
#define ALL(v) v.begin(), v.end()
#define UNIQUE(v) v.erase(unique(v.begin(), v.end()), v.end());
using namespace std;
typedef long long ll;
typedef pair<ll, ll> p;
const ll MOD = 1000000007;

ll lcs(string s, string t) {
    int n = s.length();
    int m = t.length();
    vector<vector<int>> dp(n+1, vector<int>(m+1));
    dp[0][0] = 0;
    REPP(i,n) {
        REPP(j,m) {
            if(s[i-1]==t[j-1]) dp[i][j] = dp[i-1][j-1] + 1;
            else {
                dp[i][j] = max(dp[i][j-1], dp[i-1][j]);
            }
        }
    }
    return dp[n][m];
}

int main() {
    string S,T; cin >> S >> T;
    cout << lcs(S,T) + 1 << endl;
    return 0;
}