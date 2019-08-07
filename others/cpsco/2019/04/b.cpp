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

int main() {
    int n,d; cin >> n >> d;
    vector<vector<bool>> l(d, vector<bool>(n, 0));
    REP(i,d) {
        string s; cin >> s;
        REP(j,n) {
            l[i][j] = (s[j]=='o');
        }
    }
    int ans = 0;
    REP(i,d) {
        unordered_set<int> tmp;
        REP(j,n) {
            if(l[i][j]) tmp.insert(j);
        }
        FOR(j,i,d) {
            int tmpp = tmp.size();
            REP(k,n) {
                if(l[j][k] && !tmp.count(k)) tmpp ++;
            }
            ans = max(ans, tmpp);
        }
    }
    cout << ans << endl;
    return 0;
}