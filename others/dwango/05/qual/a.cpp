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
    double n; cin >> n;
    vector<double> a(n);
    REP(i,n) cin >> a[i];
    double ave = accumulate(ALL(a),0) / n;
    double now = (double)INF;
    int ans = n-1;
    REPR(i,n) {
        if(now>=abs(a[i]-ave)) {
            now = abs(a[i]-ave);
            ans = i;
        }
    }
    cout << ans << endl;
    return 0;
}