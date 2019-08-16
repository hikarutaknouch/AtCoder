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
    vector<pair<long double, long double>> v(4);
    v[0].second = 0.25;
    REP(i,4) {
        cin >> v[i].first;
        if(i>0) v[i].second = v[i-1].second * 2.0;
    }
    ll n; cin >> n;
    v[0].first *= 4.0; v[1].first *= 2.0; v[3].first /= 2.0;
    sort(ALL(v));
    ll ans = 0;
    if(n%2==0) ans = v[0].first * n;
    else {
        if(v[0].second==2.0) {
            if(n>1) ans =  v[0].first * (n-1) + v[1].first;
            else ans = v[1].first;
        }
        else ans = v[0].first * n;
    }
    cout << ans << endl;
    return 0;
}