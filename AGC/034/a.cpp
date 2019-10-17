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
    int n,a,b,c,d; cin >> n >> a >> b >> c >> d; --a,--b,--c,--d;
    string s; cin >> s; s+= '#';
    auto judge = [&](int x, int y) {
        FOR(i,x,y) {
            if(s[i]=='#'  && s[i+1]=='#') {
                return false;
            }
        }
        return true;
    };
    auto btod = [&](int x, int y) {
        FOR(i,x,y+1) {
            if(s[i-1]=='.' && s[i]=='.' && s[i+1]=='.') {
                return true;
            }
        }
        return false;
    };
    bool ans = false;
    if(judge(a,c) && judge(b,d)) {
        if(c<d || btod(b,d)) ans = true;
    }
    cout << (ans ? "Yes" : "No") << endl;
    return 0;
}