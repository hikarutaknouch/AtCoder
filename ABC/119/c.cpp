#include <bits/stdc++.h>
#define REP(i, n) for(int i = 0; i < n; ++i)
#define REPP(i, n) for(int i = 1; i <= n; ++i)
#define REPR(i, n) for(int i = n; i >= 0; --i)
#define FOR(i, m, n) for(int i = m; i < n; ++i)
#define ALL(v) v.begin(), v.end()
#define UNIQUE(v) v.erase(unique(v.begin(), v.end()), v.end());
using namespace std;
typedef long long ll;
typedef pair<ll, ll> p;
const ll MOD = 1000000007;
const ll INF = 10e9;

int N, A, B, C;
vector<int> L;

int dfs(int cur, int a, int b, int c) {
    if(cur==N) {
        if(!a || !b || !c) return INF;
        return abs(a-A) + abs(b-B) + abs(c-C);
    }
    int res = dfs(cur+1, a, b, c);
    res = min(res, dfs(cur+1, a+L[cur], b, c) + (a ? 10 : 0));
    res = min(res, dfs(cur+1, a, b+L[cur], c) + (b ? 10 : 0));
    res = min(res, dfs(cur+1, a, b, c+L[cur]) + (c ? 10 : 0));
    return res;
}

int main() {
    cin >> N >> A >> B >> C;
    REP(i,N) {
        int tmp; cin >> tmp;
        L.emplace_back(tmp);
    }
    cout << dfs(0,0,0,0) << endl;
    return 0;
}