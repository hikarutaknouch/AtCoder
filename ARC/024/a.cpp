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
    int l,r; cin >> l >> r;
    vector<int> left(l), right(r);
    REP(i,l) cin >> left[i];
    REP(i,r) cin >> right[i];
    vector<int> used_right(r,true);
    int ans = 0;
    REP(i,l) REP(j,r) {
        if(left[i]==right[j] && used_right[j]) {
            ++ ans;
            used_right[j] = false;
            break;
        }
    }
    cout << ans << endl;
    return 0;
}