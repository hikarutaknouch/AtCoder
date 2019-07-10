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

int main() {
    ifstream in("input.txt");
    cin.rdbuf(in.rdbuf());
    ll n; cin >> n;
    vector<ll> a(n+1);
    ll sum = 0;
    REP(i,n) {
        cin >> a[i];
        sum += a[i];
    }
    vector<ll> x(n);
    ll tmp = 0;
    REP(i,n) {
        tmp += (i%2==0 ? a[i]*2 : 0);
    }
    x[0] = tmp-sum;
    REP(i,n-1) {
        x[i+1] = 2*a[i] - x[i];
    }
    REP(i,n) {
        if(i==n-1) cout << x[i] << endl;
        else cout << x[i] << " ";
    }
    return 0;
}