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

void dfs(int v, int n, int d, vector<vector<int>> &g, vector<bool> flag, int &ans) {
    flag[v] = 0;
    if(d+1==n) {
        ++ans;
        return;
    }
    REP(i,g[v].size()) {
        if(!flag[g[v][i]]) continue;
        dfs(g[v][i], n, d+1, g, flag, ans);
    }
}

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    int n,m; cin >> n >> m;
    vector<vector<int>> g(n);
    REP(i,m) {
        int a,b; cin >> a >> b; --a, --b;
        g[a].emplace_back(b);
        g[b].emplace_back(a);
    }
    vector<bool> flag(n,1);
    int ans = 0;
    dfs(0,n,0,g,flag,ans);
    cout << ans << endl;
    return 0;
}