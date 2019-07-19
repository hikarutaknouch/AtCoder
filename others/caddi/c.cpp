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
    ifstream in("input.txt");
    cin.rdbuf(in.rdbuf());
    ll n,p; cin >> n >> p;
    ll ans = 1;
    for(auto P : primeFactor(p)) {
        REP(i,P.second/n) ans *= P.first;
    }
    cout << ans << endl;
    return 0;
}