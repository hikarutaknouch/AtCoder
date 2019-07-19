#include <bits/stdc++.h>
#define REP(i, n) for(int i = 0; i < n; i++)
#define REPP(i, n) for(int i = 1; i <= n; i++)
#define REPR(i, n) for(int i = n; i >= 0; i--)
#define FOR(i, m, n) for(int i = m; i < n; i++)
#define ALL(v) v.begin(), v.end()
using namespace std;
typedef long long ll;
typedef pair<ll, ll> p;
const ll MOD = 1000000007;
const ll INF = MOD;

int main() {
    int n; cin >> n;
    vector<p> xy(n);
    REP(i,n) cin >> xy[i].first >> xy[i].second;
    set<p> XY;
    REP(i,n) XY.emplace(xy[i]);
    int ans = n;
    REP(i,n) {
        REP(j,n) {
            if(i==j) continue;
            ll f = xy[j].first - xy[i].first;
            ll s = xy[j].second - xy[i].second;
            int res = 0;
            REP(k,n) {
                if(XY.count(p(xy[k].first+f, xy[k].second+s))) continue;
                res ++;
            }
            ans = min(res,ans);
        }
    }
    cout << ans << endl;
    return 0;
}