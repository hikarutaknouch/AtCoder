#include <bits/stdc++.h>
#define REP(i, n) for(int i = 0; i < n; ++i)
#define REPP(i, n) for(int i = 1; i <= n; ++i)
#define REPR(i, n) for(int i = n-1; i >= 0; --i)
#define FOR(i, m, n) for(int i = m; i < n; ++i)
#define ALL(v) v.begin(), v.end()
using namespace std;
typedef long long ll;
const int MOD = 1000000007;

template<typename T1,typename T2> inline void chmin(T1 &a,T2 b) {if(a>b) a=b;}
template<typename T1,typename T2> inline void chmax(T1 &a,T2 b) {if(a<b) a=b;}

template<typename T>
vector<T> Divisor(T x) {
    vector<T> res;
    for(T i = 1; i*i<=x; ++i) {
        if(x%i == 0) {
            res.emplace_back(i);
            if(i*i != x) res.emplace_back(x/i);
        }
    }
    sort(res.begin(), res.end());
    return res;
}

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    ll n; cin >> n;
    ll ans = LLONG_MAX;
    vector<ll> d = Divisor(n);
    int l = d.size();
    REP(i,l) {
        ll a = d[i], b = n/d[i]; --a, --b;
        chmin(ans, a+b);
    }
    cout << ans << endl;
    return 0;
}