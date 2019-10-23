#include <bits/stdc++.h>
#define REP(i, n) for(int i = 0; i < n; ++i)
#define REPP(i, n) for(int i = 1; i <= n; ++i)
#define REPR(i, n) for(int i = n-1; i >= 0; --i)
#define FOR(i, m, n) for(int i = m; i < n; ++i)
#define ALL(v) v.begin(), v.end()
using namespace std;
typedef long long ll;
const int MOD = 1000000007;

template<typename T1,typename T2> inline void chmin(T1 &a,T2 b) {if(a>b) a=b;}
template<typename T1,typename T2> inline void chmax(T1 &a,T2 b) {if(a<b) a=b;}

static const int dx[] = {1, 0, -1, 0}, dy[] = {0, 1, 0, -1};

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    int h,w; cin >> h >> w;
    vector<string> s(h);
    REP(i,h) cin >> s[i];
    int ans = 0;
    REP(i,h) REP(j,w) {
        if(s[i][j]=='.') ++ ans;
    }
    vector<vector<int>> used(h, vector<int>(w,-1));
    using P = pair<int,int>;
    queue<P> que;
    que.push({0,0});
    used[0][0] = 0;
    while(!que.empty()) {
        P cur = que.front(); que.pop();
        for(int d = 0; d < 4; ++ d) {
            int x = cur.second + dx[d], y = cur.first + dy[d];
            if(x<0 || x>=w || y<0 || y>=h) continue;
            if(used[y][x]!=-1 || s[y][x]=='#') continue;
            used[y][x] = used[cur.first][cur.second]+1;
            que.push({y,x});
        }
    }
    ans -= used[h-1][w-1] + 1;
    cout << (used[h-1][w-1]==-1 ? -1 : ans) << endl;
    return 0;
}