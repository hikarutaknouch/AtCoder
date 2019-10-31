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
    vector<vector<int>> a(4, vector<int>(4));
    REP(i,4) REP(j,4) {
        cin >> a[i][j];
    }
    bool ans = false;
    [&]{
        REP(i,4) {
            if(a[i][0]==a[i][1] || a[i][2]==a[i][3]) {
                ans = true;
                return;
            }
        }
        REP(i,4) {
            if(a[0][i]==a[1][i] || a[2][i]==a[3][i]) {
                ans = true;
                return;
            }
        }
    }();
    cout << (ans ?  "CONTINUE" : "GAMEOVER") << endl;
    return 0;
}