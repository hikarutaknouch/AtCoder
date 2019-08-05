#include <bits/stdc++.h>
#define REP(i, n) for(int i = 0; i < n; ++i)
#define REPP(i, n) for(int i = 1; i <= n; ++i)
#define REPR(i, n) for(int i = n; i >= 0; --i)
#define FOR(i, m, n) for(int i = m; i < n; ++i)
#define ALL(v) v.begin(), v.end()
#define UNIQUE(v) v.erase(unique(v.begin(), v.end()), v.end());
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
const ll MOD = 1000000007;
const ll INF = 1000000000;

int main() {
    int n; cin >> n;
    map<P, ll> a;
    REP(i,n) {
        int tmp; cin >> tmp;
        a[{min(i+1,tmp), max(i+1, tmp)}] ++;
    }
    int ans = 0;
    for(auto x : a) ans += (x.second==2);
    cout << ans << endl;
    return 0;
}