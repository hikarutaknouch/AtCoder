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


int dfs(int i, vector<vector<int>> &g) {
    if(g[i].size()==0) return 1;
    int Min = INF, Max = 0;
    for(auto x : g[i]) {
        int tmp = dfs(x,g);
        Min = min(Min, tmp);
        Max = max(Max,tmp);
    }
    return Min + Max + 1;
}

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    int n; cin >> n;
    vector<vector<int>> g(n);
    REPP(i,n-1) {
        int b; cin >> b; --b;
        g[b].push_back(i);
    }
    int ans = dfs(0,g);;
    cout << ans << endl;
    return 0;
}