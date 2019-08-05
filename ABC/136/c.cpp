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
    ll n; cin >> n;
    vector<ll> h(n);
    REP(i,n) cin >> h[i];
    bool ans = true;
    REP(i,n) {
        if(i==0) h[i]--;
        else {
            if(h[i-1]>h[i]) {
                ans = false;
                break;
            }
            else if(h[i-1]<h[i]) h[i]--;
        }
    }
    cout << (ans ? "Yes" : "No") << endl;
    return 0;
}