#include <bits/stdc++.h>
#define REP(i, n) for(int i = 0; i < n; ++i)
#define REPP(i, n) for(int i = 1; i <= n; ++i)
#define REPR(i, n) for(int i = n-1; i >= 0; --i)
#define FOR(i, m, n) for(int i = m; i < n; ++i)
#define ALL(v) v.begin(), v.end()
using namespace std;
typedef long long ll;
const int MOD = 1000000007;

template<typename T1,typename T2> inline void chmin(T1 &a,T2 b) {if(a>b) a=b;}
template<typename T1,typename T2> inline void chmax(T1 &a,T2 b) {if(a<b) a=b;}

template <typename T>
bool isPrime(T x) {
    if(x==1) return false;
    for(T i = 2; i*i <= x; ++i) {
        if(x%i==0) return false;
    }
    return true;
}

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    vector<int> s(100010);
    s[0]=0;
    REPP(i,s.size()) {
        s[i] = s[i-1];
        if(i%2==1 && isPrime(i) && isPrime((i+1)/2)) ++s[i];
    }
    int q; cin >> q;
    int ans;
    REP(i,q) {
        int l,r; cin >> l >> r;
        ans = s[r]-s[l-1];
        cout << ans << '\n';
    }
    return 0;
}