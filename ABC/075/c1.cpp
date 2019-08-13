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

struct UnionFind {
    vector<int> par;
    UnionFind(int n) : par(n) {
        for(int i = 0; i < n; ++i) par[i] = i;
    }
    void Union(int x, int y) {
        x = Find(x), y = Find(y);
        if(x == y) return;
        par[x] = par[y];
    }
    int Find(int x) {
        if(par[x]==x) return x;
        else return par[x] = Find(par[x]);
    }
    bool Same(int x, int y) {
        return Find(x) == Find(y);
    }
};

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    int n,m; cin >> n >> m;
    vector<P> p(m);
    REP(i,m) {
        cin >> p[i].first >> p[i].second; p[i].first--, p[i].second--;
    }
    int ans = 0, cnt;
    REP(i,m) {
        UnionFind uf(n);
        REP(j,m) {
            if(j != i && !uf.Same(p[j].first, p[j].second)) {
                uf.Union(p[j].first, p[j].second);
            }
        }
        cnt = 0;
        REP(j,n) {
            if(j == uf.par[j]) cnt++;
        }
        if(1<cnt) ans ++;
    }
    cout << ans << endl;
    return 0;
}