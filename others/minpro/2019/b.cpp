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
    vector<int> ab(4, 0);
    REP(i,6) {
        int tmp;cin >> tmp;tmp --;
        ab[tmp] ++;
    }
    sort(ALL(ab));
    bool ans = (ab[0]==1 && ab[1]==1 && ab[2]==2 && ab[3]==2);
    cout << (ans ? "YES" : "NO") << endl;
    return 0;
}