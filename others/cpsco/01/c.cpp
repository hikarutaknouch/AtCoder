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
const ll INF = 1000000000;

int N,K;
vector<ll> A;
vector<ll> L;
ll ans = INF;

ll f(ll x) {
    ll res = 0;
    int i = 0;
    ll coin = 5000000000;
    while(x>0) {
        res += x/coin;
        x %= coin;
        coin = (i%2==0 ? coin/5 : coin/2);
        i ++;
    }
    return res;
}

void dfs(int cur, int cnt, ll sum) {
    if(cnt==K) {
        ans = min(ans, f(sum));
        return;
    }
    if(cur == N) return;
    dfs(cur+1, cnt, sum);
    dfs(cur+1, cnt+1, sum+A[cur]);
}

int main() {
    cin >> N >> K;
    A.resize(N);
    REP(i,N) cin >> A[i];
    dfs(0,0,0);
    cout << ans << endl;
    return 0;
}