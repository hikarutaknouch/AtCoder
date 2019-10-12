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
    vector<int> c(n-1), s(n-1), f(n-1);
    REP(i,n-1) cin >> c[i] >> s[i] >> f[i];
    int ans;
    REP(i,n-1) {
        ans = s[i] + c[i];
        FOR(j,i+1,n-1) {
            if(ans>=s[j]) {
                if(ans%f[j]==0) ans += c[j];
                else ans += (f[j] - ans%f[j]) + c[j];
            }
            else {
                ans = s[j]+c[j];
            }
        }
        cout << ans << endl;
    }
    cout << 0 << endl;
    return 0;
}