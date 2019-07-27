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
    int a,b,c; cin >> a >> b >> c;
    int ans = 0;
    int v = 0;
    int i = 0;
    while (v<c) {
        v += a;
        ans ++;
        i ++;
        if(i%7==0) v += b;
    }
    cout << ans << endl;
    return 0;
}