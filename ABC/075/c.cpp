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

struct LowLink {
    vector<P> bridge;
    vector<int> ord,low;
    vector<bool> used;
    vector<vector<int>> g;
    int n, k = 0;
    LowLink(const vector<vector<int>> &g) : g(g) {
        n = g.size();
        ord.resize(n, -1);
        low.resize(n, -1);
        used.resize(n, false);
    }
    void dfs(int v, int pre) {
        used[v] = true;
        ord[v] = k++;
        low[v] = ord[v];
        for(auto &to : g[v]) if(to != pre) {
            if(!used[to]) {
                dfs(to, v);
                low[v] = min(low[v], low[to]);
                if(low[to]>ord[v]) {
                    bridge.emplace_back(min(v,to), max(v,to));
                }
            }
            else {
                low[v] = min(low[v], ord[to]);
            }
        }
    }
};

int main() {
    int n,m; cin >> n >> m;
    vector<vector<int>> g(n);
    REP(i,m) {
        int a,b; cin >> a >> b; a--, b--;
        g[a].push_back(b);
        g[b].push_back(a);
    }
    LowLink ans(g);
    ans.dfs(0,-1);
    cout << ans.bridge.size() << endl;
    return 0;
}