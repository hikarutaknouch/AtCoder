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
    ll n; cin >> n;
    vector<ll> a(n);
    REP(i,n) cin >> a[i];
    sort(ALL(a));
    ll ans = 0;
    ll right = n-1, left = 0;
    ll x,y;
    vector<P> xy;
    while (right>=0 && a[right-1]>0) {
        x = a[0];
        y = a[right];
        ans = (x-y);
        xy.push_back({x,y});
        a[0] -= a[right];
        right --;
    }
    while (left<right && a[left]<=a[right]) {
        x = a[right];
        y = a[left];
        ans = (x-y);
        xy.push_back({x,y});
        a[right] -= a[left];
        left ++;
    }
    cout << ans << endl;
    ll l = xy.size();
    REP(i,l) {
        cout << xy[i].first << ' ' << xy[i].second << endl;
    }
    return 0;
}