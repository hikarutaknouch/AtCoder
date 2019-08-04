#include <bits/stdc++.h>
#define REP(i, n) for(int i = 0; i < n; ++i)
#define REPP(i, n) for(int i = 1; i <= n; ++i)
#define REPR(i, n) for(int i = n; i >= 0; --i)
#define FOR(i, m, n) for(int i = m; i < n; ++i)
#define ALL(v) v.begin(), v.end()
#define UNIQUE(v) v.erase(unique(v.begin(), v.end()), v.end());
using namespace std;
typedef long long ll;
typedef pair<ll, ll> P;
const ll MOD = 1000000007;
const ll INF = 1000000000;

int main() {
    ifstream in("input.txt");
    cin.rdbuf(in.rdbuf());
    int n; cin >> n;
    vector<ll> a(n), l;
    bool flag = true;
    REP(i,n) {
        cin >> a[i];
        if(i>0 && a[i]!=a[i-1]) flag = false;
    }
    if(flag) {
        cout << 0 << endl;
        return 0;
    }
    l.push_back(a[0]);
    REPP(i,n-1) {
        if(a[i]!=a[i-1]) l.push_back(a[i]);
    }
    n = l.size();
    int ans = 2;
    REPP(i,n-2) {
        if((l[i-1]<l[i] && l[i]>l[i+1]) || (l[i-1]>l[i] && l[i]<l[i+1])) ans ++;
    }
    cout << ans << endl;
    return 0;
}