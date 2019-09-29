#include <bits/stdc++.h>
#define REP(i, n) for(int i = 0; i < n; ++i)
#define REPP(i, n) for(int i = 1; i <= n; ++i)
#define REPR(i, n) for(int i = n-1; i >= 0; --i)
#define FOR(i, m, n) for(int i = m; i < n; ++i)
#define ALL(v) v.begin(), v.end()
using namespace std;
typedef long long ll;
const ll MOD = 1000000007;

template<typename T1,typename T2> inline void chmin(T1 &a,T2 b) {if(a>b) a=b;}
template<typename T1,typename T2> inline void chmax(T1 &a,T2 b) {if(a<b) a=b;}

template<typename T>
map<T, T> primeFactor(T n) {
    map<T,T> res;
    for(T i = 2; i*i<=n; ++i) {
        while(n%i==0) {
            res[i] ++;
            n /= i;
        }
    }
    if(n != 1) res[n] = 1;
    return res;
}

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    ll a,b; cin >> a >> b;
    map<int,int> m;
    for(auto x : primeFactor(a)) {
        ++ m[x.first];
    }
    for(auto x : primeFactor(b)) {
        ++ m[x.first];
    }
    int ans = 1;
    for(auto x : m) {
        if(x.second > 1) {
            ++ ans;
        }
    }
    cout << ans << endl;
    return 0;
}