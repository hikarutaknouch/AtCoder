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
    int n; cin >> n;
    map<string,ll> s;
    REP(i,n) {
        string str; cin >> str;
        sort(ALL(str));
        s[str] ++;
    }
    ll ans = 0;
    for(auto x : s) {
        if(x.second == 2) ans ++;
        else if(x.second == 3) ans += 3;
        else if(x.second>3) ans += x.second + x.second*(x.second-3)/2;
    }
    cout << ans << endl;
    return 0;
}