#include <bits/stdc++.h>
#define REP(i, n) for(int i = 0; i < n; i++)
#define REPR(i, n) for(int i = n; i >= 0; i--)
#define FOR(i, m, n) for(int i = m; i < n; i++)
#define ALL(v) v.begin(), v.end()
using namespace std;
typedef long long ll;
typedef pair<ll, ll> p;
const ll MOD = 1000000007;
const double pi = 3.1415926535897931;

int main() {
    int n; cin >> n;
    vector<double> r(n);
    REP(i,n) cin >> r[i];
    sort(r.begin(), r.end(), greater<double>());
    double ans = 0e-07;
    REP(i,n) {
        if(i%2==0) ans += pow(r[i],2.0);
        else ans -= pow(r[i],2.0);
    }
    cout << setprecision(7) << ans*pi << endl;
    return 0;
}