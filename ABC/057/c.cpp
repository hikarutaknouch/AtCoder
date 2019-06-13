#include <bits/stdc++.h>
#define REP(i, n) for(int i = 0; i < n; i++)
#define REPP(i, n) for(int i = 1; i <= n; i++)
#define REPR(i, n) for(int i = n; i >= 0; i--)
#define FOR(i, m, n) for(int i = m; i < n; i++)
#define ALL(v) v.begin(), v.end()
using namespace std;
typedef long long ll;
typedef pair<ll, ll> p;
const ll MOD = 1000000007;

int main() {
    ll n; cin >> n;
    vector<ll> f;
    for(ll i = 1; i <= sqrt(n); i ++) {
        if(n%i==0) {
            ll a = to_string(i).length();
            ll b = to_string(n/i).length();
            f.push_back(max(a,b));
        }
    }
    cout << *min_element(ALL(f)) << endl;
    return 0;
}