#include <bits/stdc++.h>
#define REP(i, n) for(int i = 0; i < n; ++i)
#define REPP(i, n) for(int i = 1; i <= n; ++i)
#define REPR(i, n) for(int i = n-1; i >= 0; --i)
#define FOR(i, m, n) for(int i = m; i < n; ++i)
#define ALL(v) v.begin(), v.end()
#define UNIQUE(v) v.erase(unique(v.begin(), v.end()), v.end());
using namespace std;
typedef long long ll;
typedef pair<double, double> P;
const ll MOD = 1000000007;
const ll INF = 1000000000;

template<typename T1,typename T2> inline void chmin(T1 &a,T2 b) {if(a>b) a=b;}
template<typename T1,typename T2> inline void chmax(T1 &a,T2 b) {if(a<b) a=b;}

void strmax(string &x, string y) {
    if(x=="INF") x=y;
    else if(x.size() < y.size()) x=y;
    else if(x.size()==y.size() && x<y) x=y;
}

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    int d[] = {2,5,5,4,5,6,3,7,6};
    int n,m; cin >> n >> m;
    vector<int> a(m);
    REP(i,m) {
        cin >> a[i];
    }
    vector<string> dp(n+10, "INF");
    dp[0] = "";
    REP(i,n) {
        if(dp[i]=="INF") continue;
        REP(j,m) {
            strmax(dp[i+d[a[j]-1]], dp[i] + (char)('0'+a[j]));
        }
    }
    cout << dp[n] << endl;
    return 0;
}