#include <bits/stdc++.h>
#define REP(i, n) for(int i = 0; i < n; i++)

using namespace std;

typedef long long ll;
const ll INF = 10e9+7;

int main() {
    ll n; cin >> n;
    vector<ll> a(n);
    REP(i, n) cin >> a[i];
    sort(a.begin(), a.end(),greater<ll>());
    vector<ll> ans;
    REP(i,n-1) {
        if(a[i]==a[i+1]) {
            ans.push_back(a[i]);
            i++;
        }
    }
    REP(i,2) ans.push_back(0);
    cout << ans[0] * ans[1] << endl;
    return 0;
}