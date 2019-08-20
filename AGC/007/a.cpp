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
    cin.tie(0);
    ios::sync_with_stdio(false);
    int h,w; cin >> h >> w;
    vector<string> a(h);
    REP(i,h) cin >> a[i];
    bool ans = true;
    [&] {
        REP(i,h) {
            REP(j,w) {
                if(a[i][j]=='#') {
                    if(i<h-1 && j<w-1) ans = ((a[i+1][j]=='#' && a[i][j+1]=='.') || (a[i][j+1]=='#' && a[i+1][j]=='.'));
                    if(i>0 && j>0) ans = !(a[i-1][j]=='#' && a[i][j-1]=='#');
                }
                if(!ans) return;
            }
        }
    }();
    cout << (ans ? "Possible" : "Impossible") << endl;
    return 0;
}