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
    int n; cin >> n;
    vector<int> a(n), b(n);
    ll sum_a = 0, sum_b = 0;
    REP(i,n) {
        cin >> a[i];
        sum_a += a[i];
    }
    REP(i,n) {
        cin >> b[i];
        sum_b += b[i];
    }
    bool ans = true;
    if(sum_a > sum_b) ans = false;
    else {
        ll cnt = sum_b - sum_a;
        ll x = 0, y = 0;
        REP(i,n) {
            if(a[i]>b[i]) y += a[i]-b[i];
            else {
                x += (b[i]-a[i])/2;
                if((b[i]-a[i])%2==1) {
                    ++ x, ++ y;
                }
            }
        }
        ans = (x <= cnt && y <= cnt);
    }
    cout << (ans ? "Yes" : "No") << endl;
    return 0;
}