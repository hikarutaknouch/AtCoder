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
    int n; cin >> n;
    int a = 1;
    int b = 1;
    REP(i,n) {
        int tmp; cin >> tmp;
        a *= tmp;
    }
    int m; cin >> m;
    REP(i,m) {
        int tmp; cin >> tmp;
        b *= tmp;
    }
    cout << (a==b ? "Yes" : "No") << endl;
    return 0;
}