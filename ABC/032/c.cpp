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
    int n,k; cin >> n >> k;
    bool flag = 1;
    vector<int> s(n);
    REP(i,n) {
        cin >> s[i];
        if(s[i]==0) flag = 0;
    }
    int ans = 0;
    if(!flag) {
        ans = n;
        cout << ans << endl;
        return 0;
    }
    int right = 0;
    ll product = 1;
    REP(left,n) {
        while (product*s[right]<=k && right<n) {
            product *= s[right];
            right ++;
        }
        ans = max(ans, right-left);
        if(left==right) right ++;
        else product /= s[left];
    }
    cout << ans << endl;
    return 0;
}