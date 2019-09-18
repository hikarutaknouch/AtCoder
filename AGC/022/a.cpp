#include <bits/stdc++.h>
#define REP(i, n) for(int i = 0; i < n; ++i)
#define REPP(i, n) for(int i = 1; i <= n; ++i)
#define REPR(i, n) for(int i = n-1; i >= 0; --i)
#define FOR(i, m, n) for(int i = m; i < n; ++i)
#define ALL(v) v.begin(), v.end()
using namespace std;
typedef long long ll;
const ll MOD = 1000000007;

template<typename T1,typename T2> inline void chmin(T1 &a,T2 b) {if(a>b) a=b;}
template<typename T1,typename T2> inline void chmax(T1 &a,T2 b) {if(a<b) a=b;}

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    string s; cin >> s;
    int n = s.length();
    vector<string> str;
    REP(i,n+1) {
        string tmp = s.substr(0,i);
        map<char,int> m;
        REP(j,i) ++ m[s[j]];
        for(char j = 'a'; j <= 'z'; ++ j) {
            if(m[j]==0) str.push_back(tmp+j);
        }
    }
    string ans = "";
    sort(ALL(str));
    REP(i,str.size()) {
        if(str[i]>s) {
            ans += str[i];
            break;
        }
    }
    cout << (ans=="" ? "-1" : ans) << endl;
    return 0;
}