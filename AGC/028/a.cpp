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

ll gcd(ll x, ll y) {
    if(x<y) gcd(y,x);
    while(y>0) {
        ll tmp = x%y;
        x = y;
        y = tmp;
    }
    return x;
}

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    int n,m; cin >> n >> m;
    string s,t; cin >> s >> t;
    ll l = n / gcd(n,m) * m;
    map<int,char> sm,tm;
    bool flag = true;
    REP(i,n) {
        int x = i * l/n + 1;
        sm[x] = s[i];
    }
    REP(i,m) {
        int y = i * l/m + 1;
        tm[y] = t[i];
        if(tm[y]==sm[y]) continue;
        else {
            if(sm[y]==0) continue;
            else flag = false;
        }
    }
    cout << (flag ? l : -1) << endl;
    return 0;
}