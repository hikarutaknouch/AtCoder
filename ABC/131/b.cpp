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

int main() {
    int n,l; cin >> n >> l;
    vector<int> r(n);
    int s = 0;
    REPP(i,n) {
        r[i-1] = l+i-1;
        s += r[i-1];
    }
    vector<p> ans(n);
    REP(i,n) {
        ans[i].first = abs(r[i]);
        ans[i].second = s-r[i];
    }
    sort(ALL(ans));
    cout << ans[0].second << endl;
    return 0;
}