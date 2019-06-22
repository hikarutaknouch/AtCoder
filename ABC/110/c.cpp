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
    string s,t; cin >> s >> t;
    int n = s.length();
    vector<int> cs(26,-1);
    vector<int> ct(26,-1);
    bool ans = true;
    REP(i,n) {
        if(cs[s[i]-97]<0) cs[s[i]-97] = t[i]-97;
        else {
            if(cs[s[i]-97] != t[i]-97) {
                ans = false;
                break;
            }
        }
        if(ct[t[i]-97]<0) ct[t[i]-97] = s[i]-97;
        else {
            if(ct[t[i]-97] != s[i]-97) {
                ans = false;
                break;
            }
        }
    }
    cout << (ans ? "Yes" : "No") << endl;
    return 0;
}