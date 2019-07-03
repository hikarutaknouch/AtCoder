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
const ll INF = 10e11;

int main() {
    int n;cin >> n;
    vector<int> a(n);
    vector<ll> s(n+1);
    s[0] = 0;
    REP(i,n) {
        cin >> a[i];
        s[i+1] = s[i] + a[i];
    }
    ll ans = INF;
    REPP(i,n-1) {
        ans = min(ans, abs(s[i] - (s[n]-s[i])));
    }
    cout << ans << endl;
    return 0;
}