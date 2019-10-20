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

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    int n; cin >> n;
    vector<int> l(n);
    REP(i,n) cin >> l[i];
    sort(ALL(l));
    int ans = 0;
    for(int i = n-1; i>=0; --i) for(int j = i-1; j>=0; --j) {
        auto d = l.end() - lower_bound(ALL(l),l[i]+l[j]);
        ans += n - 1 - i - d;
    }
    cout << ans << endl;
    return 0;
}