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

int main() {
    ifstream in("input.txt");
    cin.rdbuf(in.rdbuf());
    int n; cin >> n;
    vector<int> a(n);
    ll ans = pow(3,n);
    cin >> a[0];
    ll odd = (a[0]%2==0? 2 : 1);
    REPP(i,n-1) {
        cin >> a[i];
        odd *= (a[i]%2==0 ? 2 : 1);
    }
    ans -= odd;
    cout << ans << endl;
    return 0;
}