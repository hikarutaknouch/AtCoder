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

vector<ll> B, P;

ll f(int n, ll x) {
    if(x==0) return 0;
    if(n==0) return 1;
    if(x <= B[n-1]+1) return  f(n-1, x-1);
    else if(x == B[n-1]+2) return f(n-1, x-2) + 1;
    else return P[n-1] + 1 + f(n-1, x-B[n-1]-2);
}

int main() {
    ll n, x; cin >> n >> x;
    B.resize(n+1);
    P.resize(n+1);
    B[0] = 1;
    P[0] = 1;
    REPP(i,n) {
        B[i] = 2*B[i-1] + 3;
        P[i] = 2*P[i-1] + 1;
    }
    ll ans = f(n,x);
    cout << ans << endl;
    return 0;
}