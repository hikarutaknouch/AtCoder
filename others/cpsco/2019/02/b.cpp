#include <bits/stdc++.h>
#define REP(i, n) for(int i = 0; i < n; ++i)
#define REPP(i, n) for(int i = 1; i <= n; ++i)
#define REPR(i, n) for(int i = n; i >= 0; --i)
#define FOR(i, m, n) for(int i = m; i < n; ++i)
#define ALL(v) v.begin(), v.end()
#define UNIQUE(v) v.erase(unique(v.begin(), v.end()), v.end());
using namespace std;
typedef long long ll;
typedef pair<char, ll> P;
const ll MOD = 1000000007;
const ll INF = 1000000000;

int main() {
    int n; cin >> n;
    vector<ll> a;
    ll ans = 0;
    REP(i,n) {
        P tmp; cin >> tmp.first >> tmp.second;
        if(tmp.first=='+') ans += tmp.second;
        else if(tmp.first=='*' && tmp.second>0) a.push_back(tmp.second);
        else continue;
    }
    REP(i,a.size()) ans *= a[i];
    cout << ans << endl;
    return 0;
}