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

template<typename T1,typename T2> inline void chmin(T1 &a,T2 b) {if(a>b) a=b;}
template<typename T1,typename T2> inline void chmax(T1 &a,T2 b) {if(a<b) a=b;}

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    int n; cin >> n;
    vector<ll> a(n);
    REP(i,n) cin >> a[i];
    sort(ALL(a));
    ll ans = 0;
    int left = 0, right = n-1, i = 0;
    while (right-left>1) {
        ans += abs(a[right]-a[left]);
        if(i%2==0) -- right;
        else ++ left;
        ++ i;
    }
    if(n%2==1) ans += max(abs(a[n-1]-a[right]), abs(a[left]-a[right]));
    else ans += max(abs(a[n-1]-a[left]), abs(a[right]-a[left]));
    ll tmp = 0;
    left = 0, right = n-1, i = 0;
    while (right-left>1) {
        tmp += abs(a[right]-a[left]);
        if(i%2==0) ++ left;
        else -- right;
        ++ i;
    }
    if(n%2==1) tmp += max(abs(a[0]-a[left]), abs(a[left]-a[right]));
    else tmp += max(abs(a[0]-a[right]), abs(a[right]-a[left]));
    chmax(ans,tmp);
    cout << ans << endl;
    return 0;
}