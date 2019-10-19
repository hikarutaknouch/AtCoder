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
    string s;cin >> s;
    ll k; cin >> k;
    int n = s.size();
    ll ans = 0;
    if(s==string(n,s[0])) {
        ans = n*k/2;
    }
    else {
        vector<int> v;
        REP(i,n) {
            int cnt = 1;
            while(i+1<n && s[i] == s[i+1]) {
                ++ cnt;
                ++ i;
            }
            v.emplace_back(cnt);
        }
        int l = v.size();
        REP(i,l) {
            ans += v[i]/2;
        }
        ans *= k;
        if(s[0]==s[n-1]) {
            ans -= (v[0]/2 + v[l-1]/2 - ((v[0]+v[l-1])/2)) * (k-1);
        }
    }
    cout << ans << endl;
    return 0;
}