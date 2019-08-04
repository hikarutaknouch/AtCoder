#include <bits/stdc++.h>
#define REP(i, n) for(int i = 0; i < n; ++i)
#define REPP(i, n) for(int i = 1; i <= n; ++i)
#define REPR(i, n) for(int i = n; i >= 0; --i)
#define FOR(i, m, n) for(int i = m; i < n; ++i)
#define ALL(v) v.begin(), v.end()
#define UNIQUE(v) v.erase(unique(v.begin(), v.end()), v.end());
using namespace std;
typedef long long ll;
typedef pair<ll, ll> P;
const ll MOD = 1000000007;
const ll INF = 1000000000;

int main() {
    ll n,m,k,e; cin >> n >> m >> k >> e;
    ll sum = 0;
    vector<ll> a(n), b(m);
    REP(i,n) {
        cin >> a[i];
        sum += a[i];
    }
    REP(i,m) cin >> b[i];
    sort(ALL(a));
    sort(ALL(b), greater<ll>());
    bool flag = false;
    ll cnt = 0;
    REP(i,m) {
        e += b[i];
        cnt ++;
        if(e>=sum) {
            flag = true;
            break;
        }
        k --;
        if(k==0) break;
    }
    if(!flag) {
        cnt = 0;
        REP(i,n) {
            e -= a[i];
            if(e<0) break;
            cnt++;
        }
    }
    cout << (flag ? "Yes" : "No") << endl;
    cout << cnt << endl;
    return 0;
}