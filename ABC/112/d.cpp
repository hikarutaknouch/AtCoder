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

ll gcd(ll x, ll y) {
    if(x<y) gcd(y,x);
    while(y>0) {
        ll tmp = x%y;
        x = y;
        y = tmp;
    }
    return x;
}

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    ll n,m; cin >> n >> m;
    ll a = m/n + m%n, b = m/n;
    ll ans = 0;
    while(ans==0) {
        if(a%b==0) ans = b;
        a += n-1;
        -- b;
    }
    cout << ans << endl;
    return 0;
}