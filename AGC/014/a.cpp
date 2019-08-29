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
    vector<ll> v(3); cin >> v[0] >> v[1] >> v[2];
    ll ans = (v[0]==v[1] && v[1]==v[2] && v[0]%2==0 ? -1 : 0);
    if(ans==0) {
        vector<ll> d(3,0);
        REP(i,3) {
            while(v[i]%2==0) {
                ++ d[i];
                v[i]/=2;
            }
        }
        ans = *min_element(ALL(d));
        if(d[0]==d[1] && d[1]==d[2] && d[0]>0) ++ans;
    }
    cout << ans << endl;
    return 0;
}