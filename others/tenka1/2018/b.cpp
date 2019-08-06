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
    ll a,b,k; cin >> a >> b >> k;
    REP(i,k) {
        if(i%2==0) {
            a = (a%2==1 ? a-1 : a);
            a /= 2;
            b += a;
        }
        else {
            b = (b%2==1 ? b-1 : b);
            b /= 2;
            a += b;
        }
    }
    cout << a << ' ' << b << endl;
    return 0;
}