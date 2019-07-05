#include <bits/stdc++.h>
#define REP(i, n) for(int i = 0; i < n; ++i)
#define REPP(i, n) for(int i = 1; i <= n; ++i)
#define REPR(i, n) for(int i = n; i >= 0; --i)
#define FOR(i, m, n) for(int i = m; i < n; ++i)
#define ALL(v) v.begin(), v.end()
#define UNIQUE(v) v.erase(unique(v.begin(), v.end()), v.end());
using namespace std;
typedef long long ll;
typedef pair<ll, ll> p;
const ll MOD = 1000000007;

int main() {
    ifstream in("input.txt");
    cin.rdbuf(in.rdbuf());
    int n; cin >> n;
    vector<ll> a(n);
    ll ans = 1;
    cin >> a[0];
    vector<ll> t;
    REPP(i,n-1) {
        cin >> a[i];
        if(a[i]-a[i-1]!=0) t.push_back(a[i]-a[i-1]);
    }
    int m = t.size();
    REPP(i,m-1) {
        if(t[i]*t[i-1]<0) {
            ans ++;
            i ++;
        }
    }
    cout << ans << endl;
    return 0;
}