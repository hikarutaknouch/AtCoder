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
    int n,k; cin >> n >> k;
    vector<int> a(n);
    REP(i,n) cin >> a[i];
    sort(ALL(a), greater<int>());
    P ans = {0,0};
    REP(i,n) {
        ans.first ++;
        ans.second += a[i];
        if(ans.second>=k) break;
        if(i==n-1) ans.first = -1;
    }
    cout << ans.first << endl;
    return 0;
}