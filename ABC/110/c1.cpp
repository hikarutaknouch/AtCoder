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
    vector<vector<int>> c1(26, vector<int>(26, -1));
    REP(i,n) {
        if(s[i]!=t[i]) c1[t[i]-97][s[i]-97] = 1;
        else c1[t[i]-97][s[i]-97] = 0;
    }
    vector<vector<int>> c2(26, vector<int>(26, -1));
    REP(i,n) {
        if(s[i]!=t[i]) c2[s[i]-97][t[i]-97] = 1;
        else c2[s[i]-97][t[i]-97] = 0;
    }
    bool ans = true;
    
    REP(i,26) {
        bool change = (find(c1[i].begin(), c1[i].end(), 1) != c1[i].end() ? 1 : 0);
        bool stay = (find(c1[i].begin(), c1[i].end(), 0) != c1[i].end() ? 1 : 0);
        int cnt = count(c1[i].begin(), c1[i].end(), 1);
        if(change&&stay || cnt>1) {
            ans = false;
            break;
        }
    }
    REP(i,26) {
        bool change = (find(c2[i].begin(), c2[i].end(), 1) != c2[i].end() ? 1 : 0);
        bool stay = (find(c2[i].begin(), c2[i].end(), 0) != c2[i].end() ? 1 : 0);
        int cnt = count(c2[i].begin(), c2[i].end(), 1);
        if(change&&stay || cnt>1) {
            ans = false;
            break;
        }
    }
    cout << (ans ? "Yes" : "No") << endl;
    return 0;
}
