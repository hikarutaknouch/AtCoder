#include <bits/stdc++.h>
#define REP(i, n) for(int i = 0; i < n; i++)
#define REPR(i, n) for(int i = n; i >= 0; i--)
#define FOR(i, m, n) for(int i = m; i < n; i++)
using namespace std;
typedef long long ll;
typedef pair<ll, ll> p;
const ll MOD = 1000000007;

int main() {
    int n; cin >> n;
    vector<int> a(n);
    int sum = 0;
    REP(i,n)  {
        cin >> a[i];
        sum += a[i];
    }
    int ans = 0;
    if(sum%n != 0) ans = -1;
    else {
        int ave = sum/n;
        vector<int> s(n+1);
        s[0] = 0;
        REP(i,n) {
            s[i+1] = s[i] + a[i];
            if(s[i+1]/(i+1)==ave && s[i+1]%(i+1)==0) continue;
            ans ++;
        }
    }
    cout << ans << endl;
    return 0;
}