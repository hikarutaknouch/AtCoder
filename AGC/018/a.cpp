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

template<typename T>
T gcd(T x, T y) {
    if(x<y) gcd(y,x);
    while(y>0) {
        T tmp = x%y;
        x = y;
        y = tmp;
    }
    return x;
}

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    int n,k; cin >> n >> k;
    vector<int> a(n);
    REP(i,n) cin >> a[i];
    int g = 0;
    int m = 0;
    REP(i,n) {
        g = gcd(g,a[i]);
        chmax(m,a[i]);
    }
    bool ans = (k%g==0 && k<=m);
    cout << (ans ? "POSSIBLE" : "IMPOSSIBLE") << endl;
    return 0;
}