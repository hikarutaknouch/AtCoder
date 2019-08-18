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

void dfs(int v, int p, vector<int> &ans, vector<vector<int>> &g) {
    for(int u : g[v]) {
        if(u==p) continue;
        ans[u] += ans[v];
        dfs(u, v, ans, g);
    }
}

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    int n,q; cin >> n >> q;
    vector<vector<int>> g(n);
    REP(i,n-1) {
        int a,b; cin >> a >> b; a--, b--;
        g[a].push_back(b);
        g[b].push_back(a);
    }
    vector<int> ans(n,0);
    REP(i,q) {
        int p,x; cin >> p >> x; p--;
        ans[p] += x;
    }
    dfs(0,-1,ans,g);
    REP(i,n) {
        if(i==n-1) cout << ans[i] << endl;
        else cout << ans[i] << " ";
    }
    return 0;
}
