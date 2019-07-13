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
const ll INF = 1000000000;

int main() {
    string s; cin >> s;
    int n = s.length();
    set<char> c;
    REP(i,n) c.emplace(s[i]);
    bool ans = (c.size()%2); ans = !ans;
    if(ans) ans = ((c.find('N')!=c.end() && c.find('S')!=c.end()) || (c.find('E')!=c.end() && c.find('W')!=c.end()));
    cout << (ans ? "Yes" : "No") << endl;
    return 0;
}