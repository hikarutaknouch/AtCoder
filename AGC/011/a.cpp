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
    ll n,c,k; cin >> n >> c >> k;
    vector<ll> t(n);
    REP(i,n) cin >> t[i];
    sort(ALL(t));
    ll ans = 0, right = 0, passenger;
    REP(left,n) {
        passenger=1;
        while (right+1 < n && t[right+1]-t[left] <= k && passenger+1 <= c) {
            ++ passenger;
            ++ right;
        }
        ++ ans;
        left = right;
        ++ right;
    }
    cout << ans << endl;
    return 0;
}