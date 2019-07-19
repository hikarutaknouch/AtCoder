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
    map<ll, ll> d;
    REP(i,n) {
        int tmp; cin >> tmp;
        d[tmp]++;
    }
    int m; cin >> m;
    vector<ll> t(m);
    REP(i,m) cin >> t[i];
    bool ans = true;
    REP(i,m) {
        auto itr = d.find(t[i]);
        if(itr != d.end()) {
            d[t[i]] --;
            if(d[t[i]]==0) d.erase(itr);
        }
        else {
            ans = false;
            break;
        }
    }
    cout << (ans ? "YES" : "NO") << endl;
    return 0;
}