#include <bits/stdc++.h>
#define REP(i, n) for(int i = 0; i < n; i++)
#define REPR(i, n) for(int i = n; i >= 0; i--)
#define FOR(i, m, n) for(int i = m; i < n; i++)
#define ALL(v) v.begin(), v.end()
using namespace std;
typedef long long ll;
typedef pair<ll, ll> p;
const ll MOD = 1000000007;

int main() {
    string s; cin >> s;
    int n;cin >> n;
    int l = s.length();
    vector<string> ans;
    REP(i,l) {
        string tmp = ""; tmp += s[i];
        REP(i,l) {
            ans.push_back(tmp + s[i]);
        }
    }
    sort(ALL(ans));
    cout << ans[n-1] << endl;
    return 0;
}