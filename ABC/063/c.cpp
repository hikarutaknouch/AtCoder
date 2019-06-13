#include <bits/stdc++.h>
#define REP(i, n) for(int i = 0; i < n; i++)
#define REPR(i, n) for(int i = n; i >= 0; i--)
#define FOR(i, m, n) for(int i = m; i < n; i++)
#define ALL(v) v.begin(), v.end()
using namespace std;
typedef long long ll;
typedef pair<ll, ll> p;
const ll MOD = 1000000007;

int main() {
    int n; cin >> n;
    vector<int> s(n);
    int ans = 0;
    int d = 0;
    REP(i,n) {
        cin >> s[i];
        ans += s[i];
        d += (s[i]%10==0 ? 1 : 0);
    }
    if(d==n) ans = 0;
    sort(ALL(s));
    int index = 0;
    while (ans%10==0 && index<n && d!=n) {
        ans -= (s[index]%10!=0 ? s[index] : 0);
        index ++;
    }
    cout << ans << endl;
    return 0;
}