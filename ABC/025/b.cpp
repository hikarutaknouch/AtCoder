#include <bits/stdc++.h>
#define REP(i, n) for(int i = 0; i < n; i++)
#define REPR(i, n) for(int i = n; i >= 0; i--)
#define FOR(i, m, n) for(int i = m; i < n; i++)
#define ALL(v) v.begin(), v.end()
using namespace std;
typedef long long ll;
typedef pair<string, ll> p;
const ll MOD = 1000000007;

int main() {
    int n,a,b; cin >> n >> a >> b;
    vector<p> sd(n);
    int ans = 0;
    REP(i,n) {
        cin >> sd[i].first >> sd[i].second;
        int tmp = 0;
        if(sd[i].second<a) tmp = a;
        else if(sd[i].second>b) tmp = b;
        else tmp = sd[i].second;
        ans += (sd[i].first=="West" ? -1 * tmp : tmp);
    }
    cout << (ans<0 ? "West " : (ans>0 ? "East " : "")) << abs(ans) << endl;
    return 0;
}