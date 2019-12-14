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

int digit_count(ll x) {
    int res = 0;
    while (x) {
        ++ res;
        x /= 10;
    }
    return res;
}

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    ll a,b,x; cin >> a >> b >> x;
    ll ans;
    if(a+b>=x) ans = 0;
    else {
        ll l = 0, r = 1e9+1;
        ll m;
        while (r-l>1) {
            m = (l+r)/2;
            if(x >= a*m + b*digit_count(m)) l = m;
            else r = m;
        }
        ans = l;
    }
    cout << ans << endl;
    return 0;
}