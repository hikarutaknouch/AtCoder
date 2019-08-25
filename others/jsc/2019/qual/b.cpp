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

template<typename T1,typename T2> inline void chmin(T1 &a,T2 b) {if(a>b) a=b;}
template<typename T1,typename T2> inline void chmax(T1 &a,T2 b) {if(a<b) a=b;}

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    ll n,k; cin >> n >> k;
    vector<ll> a(n);
    REP(i,n) cin >> a[i];
    ll ans = 0;
    REP(i,n) {
        ll b=0, d=0;
        REP(j,i) {
            b += (a[j]>a[i]);
        }
        REP(j,n) {
            d+=(a[j]>a[i]);
        }
        ans += b*k + (k*(k-1)/2)%MOD*d%MOD;
        ans %= MOD;
    }
    cout << ans << endl;
    return 0;
}