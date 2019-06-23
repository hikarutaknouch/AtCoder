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
    ll a,b,c,d; cin >> a >> b >> c >> d;
    ll cd = lcm(c,d);
    ll X = b/c - (a-1)/c;
    ll Y = b/d - (a-1)/d;
    ll Z = b/cd - (a-1)/cd; 
    cout << (b-a+1) - (X+Y-Z) << endl;
    return 0;
}