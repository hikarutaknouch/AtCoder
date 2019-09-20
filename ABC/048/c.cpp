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
    ll n,x; cin >> n >> x;
    vector<ll> a(n);
    REP(i,n) cin >> a[i];
    vector<ll> v = a;
    ll ans = 0;
    if(a[0]>x) a[0]=x;
    REP(i,n-1) {
        if(a[i]+a[i+1]>x) {
            a[i+1] = x-a[i];
            if(a[i]+a[i+1]>x) {
                a[i] = x-a[i+1];
            }
        }
    }
    REP(i,n) {
        ans += v[i]-a[i];
    }
    cout << ans << endl;
    return 0;
}