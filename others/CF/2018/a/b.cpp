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
    int n,m,a,b; cin >> n >> m >> a >> b;
    vector<int> mikan(n,b);
    REP(i,m) {
        int l,r; cin >> l >> r; l --;
        FOR(j,l,r) {
            mikan[j] = a;
        }
    }
    int ans = accumulate(ALL(mikan), 0);
    cout  << ans << endl;
    return 0;
}