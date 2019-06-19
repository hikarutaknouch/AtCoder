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

bool judgePrimeNumber(int n) {
    if(n==1) return 0;
    for(int i = 2; i <= sqrt(n); i ++) {
        if(n%i==0) return 0;
    }
    return 1;
}

int main() {
    ll n; cin >> n;
    vector<int> p;
    REPP(i,n) {
        if(judgePrimeNumber(i)) {
            p.push_back(i);
        }
    }
    vector<vector<int>> l(p.size(), vector<int>(2));
    REP(i,p.size()) l[i][0] = p[i];
    REPP(i,n) {
        int tmp = i;
        int index = 0;
        while (tmp>1) {
            if(tmp%l[index][0]==0) {
                l[index][1]++;
                tmp /= l[index][0];
            }
            else index ++;
        }
    }
    ll ans = 1;
    REP(i,p.size()) {
        if(l[i][1]>0) ans *= l[i][1]+1;
        ans %= MOD;
    }
    cout << ans << endl;
    return 0;
}