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

const int dx[4] = {1, 0, -1, 0};
const int dy[4] = {0, 1, 0, -1};

int H,W;
string C[550];
bool used[550][550];

void dfs(int x, int y) {
    used[x][y] = true;
    REP(i,4) {
        int nx = x + dx[i], ny = y + dy[i];
        if(nx>=0 && nx<H && ny>=0 && ny<W && C[nx][ny]!='#') {
            if(!used[nx][ny]) dfs(nx,ny);
        }
    }
    return;
}

int main() {
    cin >> H >> W;
    p s,g;
    REP(i,H) {
        cin >> C[i];
        REP(j,W) {
            if(C[i][j]=='s') s = make_pair(i,j);
            if(C[i][j]=='g') g = make_pair(i,j);
        }
    }
    dfs(s.first, s.second);
    cout << (used[g.first][g.second] ? "Yes" : "No") << endl;
    return 0;
}