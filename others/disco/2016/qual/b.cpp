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
    double r,n,m; cin >> r >> n >> m;
    double ans = 0;
    auto calc=[&](int x) {
        double y = r*2*x/n-r;
        if(y>=r) return 0.0;
        else return 2.0*sqrt(r*r-y*y);
    };
    REPP(i,n+m) {
        ans += max(calc(i),calc(i-m));
    }
    cout << setprecision(10) << ans << endl;
    return 0;
}