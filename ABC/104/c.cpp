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
    int d,g; cin >> d >> g;
    vector<int> p(d), c(d);
    REP(i,d) cin >> p[i] >> c[i];
    ll ans = INF;
    REP(bit,(1<<d)) {
        ll sum = 0;
        ll cnt = 0;
        REP(i,d) {
            if(bit & (1<<i)) {
                sum += (i+1)*p[i]*100 + c[i];
                cnt += p[i];
            }
        }
        if(sum<g) {
            [&] {
                REPR(i,d) {
                    if(bit & (1<<i)) continue;
                    int tmp = p[i];
                    REP(j,p[i]) {
                        if(sum>=g) return;
                        sum += (i+1)*100;
                        ++ cnt;
                    }
                }
            }();
        }
        chmin(ans,cnt);
    }
    cout << ans << endl;
    return 0;
}