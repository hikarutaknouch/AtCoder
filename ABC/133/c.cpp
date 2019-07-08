#include <bits/stdc++.h>
#define REP(i, n) for(int i = 0; i < n; ++i)
#define REPP(i, n) for(int i = 1; i <= n; ++i)
#define REPR(i, n) for(int i = n; i >= 0; --i)
#define FOR(i, m, n) for(long long i = m; i < n; ++i)
#define ALL(v) v.begin(), v.end()
#define UNIQUE(v) v.erase(unique(v.begin(), v.end()), v.end());
using namespace std;
typedef long long ll;
typedef pair<ll, ll> p;
const ll MOD = 2019;
const ll INF = 10000000000000000;

int main() {
    ifstream in("input.txt");
    cin.rdbuf(in.rdbuf());
    ll l,r; cin >> l >> r;
    ll ans = INF;
    FOR(i,l,min(r,l+2019)) {
        FOR(j,i+1,min(r,l+2019)+1) {
            ans = min(i*j%MOD,ans);
        }
    }
    cout << ans << endl;
    return 0;
}
