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
    int a,b,c,k,s,t; cin >> a >> b >> c >> k >> s >> t;
    int ans = (s+t>= k ? (a-c)*s + (b-c)*t: a*s + b*t);
    cout << ans << endl;
    return 0;
}