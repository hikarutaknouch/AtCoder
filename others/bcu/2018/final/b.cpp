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
    int h,w; cin >> h >> w;
    int x,y; cin >> x >> y; x--; y--;
    vector<vector<int>> a(h, vector<int>(w));
    REP(i,h) {
        REP(j, w) cin >> a[i][j];
    }
    vector<string> ans(h, string(w, '.'));
    vector<int> xy(4, INF);
    int tmp;
    while (true){
        ans[x][y] = 'W';
        xy[0] = (x>0 ? a[x-1][y] : INF);
        xy[1] = (y<w-1 ? a[x][y+1] : INF);
        xy[2] = (y>0 ? a[x][y-1] : INF);
        xy[3] = (x<h-1 ? a[x+1][y] : INF);
        tmp = *min_element(ALL(xy));
        if(tmp>=a[x][y]) break;
        if(tmp==xy[0]) x--;
        else if(tmp==xy[1]) y++;
        else if(tmp==xy[2]) y--;
        else x++;
    }
    REP(i,h) cout << ans[i] << endl;
    return 0;
}