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
    int n; cin >> n;
    string s; cin >> s;
    int left = 0, right = 0;
    REP(i,n) {
        if(s[i]=='(') ++right;
        else {
            if(right==0) ++left;
            else --right;
        }
    }
    string ans = "";
    while(left>0) {
        ans += '(';
        -- left;
    }
    ans += s;
    while(right>0) {
        ans += ')';
        -- right;
    }
    cout << ans << endl;
    return 0;
}