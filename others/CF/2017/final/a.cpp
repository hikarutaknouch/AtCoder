#include <bits/stdc++.h>
#define REP(i, n) for(int i = 0; i < n; ++i)
#define REPP(i, n) for(int i = 1; i <= n; ++i)
#define REPR(i, n) for(int i = n-1; i >= 0; --i)
#define FOR(i, m, n) for(int i = m; i < n; ++i)
#define ALL(v) v.begin(), v.end()
#define UNIQUE(v) v.erase(unique(v.begin(), v.end()), v.end());
using namespace std;
typedef long long ll;
typedef pair<ll, ll> P;
const ll MOD = 1000000007;
const ll INF = 1000000000;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    string s; cin >> s;
    int n = s.length();
    bool flag = true;
    string str = "";
    REP(i,n) {
        if(i<n-1 && s[i]=='A' && s[i+1]=='A') flag = false;
        if(i<n-1 && s[i]=='K' && s[i+1]=='A') flag = false;
        if(i<n-1 && s[i]=='I' && s[i+1]=='A') flag = false;
        if(s[i]=='A') continue;
        str += s[i];
    }
    bool ans = (flag && str=="KIHBR");
    cout << (ans ? "YES" : "NO") << endl;
    return 0;
}