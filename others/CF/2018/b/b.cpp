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
    ifstream in("input.txt");
    cin.rdbuf(in.rdbuf());
    int n,x; cin >> n >> x;
    ll ans = 0;
    vector<P> ab(n);
    REP(i,n) {
        cin >> ab[i].first >> ab[i].second;
        ans += ab[i].first * ab[i].second;
    }
    ll tmp = 0;
    REP(i,n) {
        tmp = max(x*ab[i].second, tmp);
    }
    ans += tmp;
    cout << ans << endl;
    return 0;
}