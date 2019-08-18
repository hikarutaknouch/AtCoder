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

vector<int> G[200000];
vector<int> V;

void dfs(int v, int p) {
    for(int u : G[v]) {
        if(u==p) continue;
        V[u] += V[v];
        dfs(u, v);
    }
}

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    int n,q; cin >> n >> q;
    REP(i,n-1) {
        int a,b; cin >> a >> b; a--, b--;
        G[a].push_back(b);
        G[b].push_back(a);
    }
    V.resize(n);
    REP(i,q) {
        int p,x; cin >> p >> x; p--;
        V[p] += x;
    }
    dfs(0,-1);
    REP(i,n) {
        if(i==n-1) cout << V[i] << endl;
        else cout << V[i] << " ";
    }
    return 0;
}