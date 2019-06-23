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
    string s; cin >> s;
    int n = s.length();
    int t; cin >> t;
    int x = 0; int y = 0;
    int cnt = 0;
    REP(i,n) {
        if(s[i]=='L') x--;
        else if(s[i]=='R') x++;
        else if(s[i]=='U') y++;
        else if(s[i]=='D') y--;
        else cnt ++;
    }
    int ans = abs(x)+abs(y);
    if(t==1) ans += cnt;
    else {
        REP(i,cnt) {
            if(ans>0) ans--;
            else ans ++;
        }
    }
    cout << ans << endl;
    return 0;
}