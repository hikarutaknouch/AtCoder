#include <bits/stdc++.h>
#define REP(i, n) for(int i = 0; i < n; ++i)
#define REPP(i, n) for(int i = 1; i <= n; ++i)
#define REPR(i, n) for(int i = n; i >= 0; --i)
#define FOR(i, m, n) for(int i = m; i < n; ++i)
#define ALL(v) v.begin(), v.end()
#define UNIQUE(v) v.erase(unique(v.begin(), v.end()), v.end());
using namespace std;
typedef long long ll;
typedef pair<char, int> p;
const ll MOD = 1000000007;
const ll INF = 1000000000;

int main() {
    string s; cin >> s;
    int n = s.length();
    set<char> c;
    REP(i,n) c.emplace(s[i]);
    if(c.size()==1) {
        cout << 0 << endl;
        return 0;
    }
    ll ans = INF;
    for(char x : c) {
        ll tmp = 0;
        string str = s;
        bool flag = true;
        while(flag) {
            string S = "";
            REP(i,str.length()-1) {
                S += (str[i]==x || str[i+1]==x ? x : str[i]);
            }
            str = S;
            REP(i,S.length()) {
                if(S[i] != x) break;
                if(i==S.length()-1) {
                    flag = false;
                }
            }
            tmp ++;
        }
        ans = min(ans, tmp);
    }
    cout << ans << endl;
    return 0;
}