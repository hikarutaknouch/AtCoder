#include <bits/stdc++.h>
#define REP(i, n) for(int i = 0; i < n; i++)

using namespace std;

typedef long long ll;
typedef pair<ll, ll> p;

const int MOD = 1000000007;

int main() {
    int n; cin >> n;
    vector<int> w(n);
    vector<int> s(n);
    REP(i,n) {
        cin >> w[i];
        if(i==0) s[i] = w[i];
        else s[i] += w[i]+s[i-1];
    }
    int ans = MOD;
    REP(i,n) {
        ans = min(abs(s[n-1] - s[i]*2), ans);
    }
    cout << ans << endl;
    return 0;
}