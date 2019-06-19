#include <bits/stdc++.h>
#define REP(i, n) for(int i = 0; i < n; i++)
#define REPR(i, n) for(int i = n; i >= 0; i--)
#define FOR(i, m, n) for(int i = m; i < n; i++)
#define ALL(v) v.begin(), v.end()
using namespace std;
typedef long long ll;
typedef pair<ll, ll> p;
const ll MOD = 1000000007;

int main() {
    int n,t; cin >> n >> t;
    int ans = 0;
    int idx = 0;
    vector<int> a(n);
    REP(i,n) cin >> a[i];
    vector<int> s(n-1);
    REP(i,n-1) {
        s[i] = a[i+1]-a[i];
        ans += (s[i]>=t ? t : s[i]);
    }
    cout << ans + t << endl;
    return 0;
}