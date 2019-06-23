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
    int n; cin >> n;
    vector<int> p;
    int a,b; cin >> a >> b;
    p.push_back(a);
    p.push_back(b);
    int k; cin >> k;
    bool ans = true;
    REP(i,k) {
        int P; cin >> P;
        REP(j,p.size()) {
            if(p[j]==P) {
                cout << "NO" << endl;
                return 0;
            }
        }
        p.push_back(P);
    }
    cout << "YES" << endl;
    return 0;
}