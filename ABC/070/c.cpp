#include <bits/stdc++.h>
#define REP(i, n) for(int i = 0; i < n; i++)

using namespace std;

typedef long long ll;

ll gcd(ll x, ll y) {
    if(x < y) return gcd(y, x);
    while (y != 0LL) {
        ll tmp = x%y;
        x = y;
        y = tmp;
    }
    return x;
}

ll lcm(ll a, ll b) {
    return a/gcd(a,b) * b;
}

int main() {
    int n; cin >> n;
    vector<ll> t(n);
    REP(i,n) cin >> t[i];
    ll ans = 1;
    REP(i,n) ans = lcm(ans, t[i]);
    cout << ans << endl;
    return 0;
}