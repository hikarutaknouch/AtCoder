#include <bits/stdc++.h>
#define REP(i, n) for(int i = 0; i < n; ++i)
#define REPP(i, n) for(int i = 1; i <= n; ++i)
#define REPR(i, n) for(int i = n; i >= 0; --i)
#define FOR(i, m, n) for(int i = m; i < n; ++i)
#define ALL(v) v.begin(), v.end()
#define UNIQUE(v) v.erase(unique(v.begin(), v.end()), v.end());
using namespace std;
typedef long long ll;
typedef pair<ll, ll> p;
const ll MOD = 1000000007;
const ll INF = 1000000000;

ll calc(int x) {
    if(x==1) return 1;
    return x + calc(x-1);
}

int main() {
    int n; cin >> n;
    vector<ll> a(n);
    REP(i,n) cin >> a[i];
    ll ans = 0;
    int right = 1;
    REP(left, n) {
        int tmp = 1;
        while (right<n && a[right-1]<a[right]){
            ++ tmp;
            ++ right;
        }
        ans += calc(tmp);
        left = right-1;
        ++ right;
    }
    cout << ans << endl;
    return 0;
}