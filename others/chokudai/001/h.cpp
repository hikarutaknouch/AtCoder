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

int lis(int n, vector<int>& v) {
    vector<int> dp(n+1, 0);
    dp[0] = v[0];
    int length = 1;
    REPP(i,n-1) {
        if(dp[length-1]<v[i]) dp[length++] = v[i];
        else *lower_bound(dp.begin(), dp.begin()+length, v[i]) = v[i];
    }
    return length;
}

int main() {
    int n;cin >> n;
    vector<int> a(n);
    REP(i,n) cin >> a[i];
    int ans = lis(n,a);
    cout << ans << endl;
    return 0;
}