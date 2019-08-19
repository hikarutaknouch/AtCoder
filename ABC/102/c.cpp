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
    int n; cin >> n;
    vector<ll> a(n);
    REP(i,n) {
        cin >> a[i];
        a[i] -= i+1;
    }
    sort(ALL(a));
    int b = (n%2==1 ? a[n/2] : (a[n/2]+a[n/2-1])/2);
    ll ans = 0;
    REP(i,n) ans += abs(a[i]-b);
    cout << ans << endl;
    return 0;
}