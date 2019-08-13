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
    int x,y; cin >> x >> y;
    if(x>y) swap(x,y);
    bool ans;
    if((x+y)%4==0) {
        int a = (x+y)/4;
        ans = (x-a>=0 && y-a>=0 && (x-a)%2==0 && (y-a)%2==0);
    }
    else ans = false;
    cout << (ans ? "Yes" : "No") << endl;
    return 0;
}