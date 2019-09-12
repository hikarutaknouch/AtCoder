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
    map<int,int> a;
    REP(i,n) {
        int num;cin >> num;
        ++ a[num];
    }
    ll ans = 1;
    bool flag = true;
    for(auto x: a) {
        if(x.second>2 || (n%2==0 && x.second<2) || (n%2==1 && ((x.first==0 && x.second==2)||x.first>0 && x.second<1))) {
            flag = false;
            break;
        }
        if(x.second==2) ans *= 2;
        ans %= MOD;
    }
    cout << (flag ? ans : 0) << endl;
    return 0;
}