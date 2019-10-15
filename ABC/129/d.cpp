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

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    int h,w; cin >> h >> w;
    vector<string> s(h);
    vector<vector<int>> l(h,vector<int>(w,0)), r(h,vector<int>(w,0)), u(h,vector<int>(w,0)),d(h,vector<int>(w,0));
    REP(i,h) cin >> s[i];
    REP(i,h) REP(j,w) {
        if(s[i][j]=='#') continue;
        if(j==0) l[i][j] = 1;
        else l[i][j] = l[i][j-1]+1;
    }
    REPR(i,h) REPR(j,w) {
        if(s[i][j]=='#') continue;
        if(j==w-1) r[i][j] = 1;
        else r[i][j] = r[i][j+1]+1;
    }
    REP(j,w) REP(i,h) {
        if(s[i][j]=='#') continue;
        if(i==0) u[i][j] = 1;
        else u[i][j] = u[i-1][j]+1;
    }
    REPR(j,w) REPR(i,h) {
        if(s[i][j]=='#') continue;
        if(i==h-1) d[i][j] = 1;
        else d[i][j] = d[i+1][j]+1;
    }
    int ans = 0, cnt;
    REP(i,h) REP(j,w){
        if(s[i][j]=='#') continue;
        cnt = l[i][j] + r[i][j] + u[i][j] + d[i][j] - 3;
        chmax(ans,cnt);
    }
    cout << ans << endl;
    return 0;
}