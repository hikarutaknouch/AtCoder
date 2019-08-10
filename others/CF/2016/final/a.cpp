#include <bits/stdc++.h>
#define REP(i, n) for(int i = 0; i < n; ++i)
#define REPP(i, n) for(int i = 1; i <= n; ++i)
#define REPR(i, n) for(int i = n-1; i >= 0; --i)
#define FOR(i, m, n) for(int i = m; i < n; ++i)
#define ALL(v) v.begin(), v.end()
#define UNIQUE(v) v.erase(unique(v.begin(), v.end()), v.end());
using namespace std;
typedef long long ll;
typedef pair<ll, ll> P;
const ll MOD = 1000000007;
const ll INF = 1000000000;

int main() {
    int h,w; cin >> h >> w;
    vector<vector<string>> s(h, vector<string>(w));
    string ans;
    REP(i,h) {
        REP(j,w) {
            cin >> s[i][j];
            if(s[i][j]=="snuke") {
                char tmp = j + 65;
                ans = tmp + to_string(i+1);
                break;
            }
        }
    }
    cout << ans << endl;
    return 0;
}