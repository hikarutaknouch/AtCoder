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
    int n,m; cin >> n >> m;
    priority_queue<int> que;
    REP(i,n) {
        int a;cin >> a;
        que.emplace(a);
    }
    REP(i,m) {
        int a = que.top(); que.pop();
        a /= 2;
        que.emplace(a);
    }
    ll ans = 0;
    while (!que.empty()) {
        ans += que.top(); que.pop();
    }
    cout << ans << endl;
    return 0;
}