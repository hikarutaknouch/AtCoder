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
    cin.tie(0);
    ios::sync_with_stdio(false);
    int a,b,n; cin >> a >> b >> n;
    string x; cin >> x;
    REP(i,n) {
        if(x[i]=='S' && a>0) a--;
        else if(x[i]=='C' && b>0) b--;
        else if(x[i]=='E' && (a>0 || b>0)) {
            if(a==b) a--;
            else {
                if(a>b) a--;
                else b--;
            }
        }
    }
    cout << a << endl;
    cout << b << endl;
    return 0;
}