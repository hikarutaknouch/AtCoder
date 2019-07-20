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
const int MAX = 510000;

ll fac[MAX], finv[MAX], inv[MAX];

void COMinit() {
    fac[0] = fac[1] = 1;
    finv[0] = finv[1] = 1;
    inv[1] = 1;
    for (int i = 2; i < MAX; i++){
        fac[i] = fac[i - 1] * i % MOD;
        inv[i] = MOD - inv[MOD%i] * (MOD / i) % MOD;
        finv[i] = finv[i - 1] * inv[i] % MOD;
    }
}

ll COM(int n, int k){
    if (n < k) return 0;
    if (n < 0 || k < 0) return 0;
    return fac[n] * (finv[k] * finv[n - k] % MOD) % MOD;
}


map<ll, ll> primeFactor(ll N) {
    map<ll,ll> res;
    for(ll i = 2; i*i<=N; ++i) {
        while(N%i==0) {
            res[i] ++;
            N /= i;
        }
    }
    if(N != 1) res[N] = 1;
    return res;
}

int main() {
    ll n,m; cin >> n >> m;
    COMinit();
    map<ll, ll> p = primeFactor(m);
    ll ans = 1;
    for(auto x : p) {
        ans *= COM(x.second+n-1, n-1);
        ans %= MOD;
    }
    cout << ans << endl;
    return 0;
}