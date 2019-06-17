#include <bits/stdc++.h>
#define REP(i, n) for(int i = 0; i < n; i++)
#define REPP(i, n) for(int i = 1; i <= n; i++)
#define REPR(i, n) for(int i = n; i >= 0; i--)
#define FOR(i, m, n) for(int i = m; i < n; i++)
#define ALL(v) v.begin(), v.end()
#define UNIQUE(v) v.erase(unique(v.begin(), v.end()), v.end());
using namespace std;
typedef long long ll;
typedef pair<ll, ll> p;
const ll MOD = 1000000007;

int main() {
    ll n,k; cin >> n >> k;
    vector<ll> a(n);
    REP(i,n) cin >> a[i];
    ll ans = 0LL;
    REPP(i,n) ans *= i;
    int right = 0;
    ll sum = 0;
    REP(left,n) {
        while (right<n && sum<k) {
            sum += a[right];
            right ++;
        }
        if(sum<k) break;
        ans += n-right+1;
        if(right==left) right ++;
        else sum -= a[left];
    }
    cout << ans << endl;
    return 0;
}