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
    int n; cin >> n;
    vector<int> a(n), b(n), c(n-1);
    REP(i,n) cin >> a[i];
    REP(i,n) cin >> b[i];
    REP(i,n-1) cin >> c[i];
    int ans = 0;
    REP(i,n) {
        ans += b[a[i]-1];
        if(i>0) ans += (a[i]-a[i-1] == 1 ? c[a[i-1]-1] : 0);
    }
    cout << ans << endl;
    return 0;
}