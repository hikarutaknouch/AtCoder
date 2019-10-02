#include <bits/stdc++.h>
#define REP(i, n) for(int i = 0; i < n; ++i)
#define REPP(i, n) for(int i = 1; i <= n; ++i)
#define REPR(i, n) for(int i = n-1; i >= 0; --i)
#define FOR(i, m, n) for(int i = m; i < n; ++i)
#define ALL(v) v.begin(), v.end()
using namespace std;
typedef long long ll;
const ll MOD = 1000000007;

static const int dx[] = {1, 0, -1, 0}, dy[] = {0, 1, 0, -1};

template<typename T1,typename T2> inline void chmin(T1 &a,T2 b) {if(a>b) a=b;}
template<typename T1,typename T2> inline void chmax(T1 &a,T2 b) {if(a<b) a=b;}

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    int r,c; cin >> r >> c;
    int sy,sx,gy,gx; cin >> sy >> sx >> gy >> gx; --sx,--sy,--gx,--gy;
    vector<string> grid(r);
    REP(i,r) cin >> grid[i];
    vector<vector<int>> used(r, vector<int>(c,-1));
    using P = pair<int,int>;
    queue<P> que;
    que.push({sy,sx});
    used[sy][sx] = 0;
    while(!que.empty()) {
        P cur = que.front(); que.pop();
        for(int d = 0; d < 4; ++ d) {
            int x = cur.second + dx[d], y = cur.first + dy[d];
            if(x<0 || x>=c || y<0 || y>=r) continue;
            if(used[y][x]!=-1 || grid[y][x]=='#') continue;
            used[y][x] = used[cur.first][cur.second]+1;
            que.push({y,x});
        }
    }
    cout << used[gy][gx] << endl;
    return 0;
}