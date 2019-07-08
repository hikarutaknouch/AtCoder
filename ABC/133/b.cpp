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
    int n,d; cin >> n >> d;
    vector<vector<int>> x(n, vector<int>(d));
    REP(i,n) {
        REP(j,d) cin >> x[i][j];
    }
    int ans = 0;
    REP(i,n) {
        FOR(j,i+1,n) {
            double distance = 0;
            REP(k,d) {
                distance += pow(abs(x[i][k]-x[j][k]),2);
            }
            distance = sqrt(distance);
            ans += (ceil(distance) == floor(distance));
        }
    }
    cout << ans << endl;
    return 0;
}