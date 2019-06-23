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
    int h,w; cin >> h >> w;
    vector<string> s(h);
    REP(i,h) cin >> s[i];
    REP(i,h) {
        REP(j,w) {
            if(s[i][j]=='.') continue;
            else {
                if(i>0 && s[i-1][j]=='#') continue;
                if(j>0 && s[i][j-1]=='#') continue;
                if(j<w-1 && s[i][j+1]=='#') continue;
                if(i<h-1 && s[i+1][j]=='#') continue;
                cout << "No" << endl;
                return 0;
            }
        }
    }
    cout << "Yes" << endl;
    return 0;
}