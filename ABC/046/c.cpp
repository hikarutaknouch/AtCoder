#include <bits/stdc++.h>
#define REP(i, n) for(int i = 0; i < n; ++i)
#define REPP(i, n) for(int i = 1; i <= n; ++i)
#define REPR(i, n) for(int i = n-1; i >= 0; --i)
#define FOR(i, m, n) for(int i = m; i < n; ++i)
#define ALL(v) v.begin(), v.end()
using namespace std;
typedef long long ll;
const ll MOD = 1000000007;

template<typename T1,typename T2> inline void chmin(T1 &a,T2 b) {if(a>b) a=b;}
template<typename T1,typename T2> inline void chmax(T1 &a,T2 b) {if(a<b) a=b;}

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    int n; cin >> n;
    vector<ll> t(n),a(n);
    REP(i,n) cin >> t[i] >> a[i];
    ll x = 1, y = 1, m = 1;
    REP(i,n) {
        if(i==0) m=1;
        else m = max((t[i-1]*m + t[i]-1)/t[i], (a[i-1]*m + a[i]-1)/a[i]);
        x = t[i]*m, y = a[i]*m;
    }
    ll ans = x+y;
    cout << ans << endl;
    return 0;
}