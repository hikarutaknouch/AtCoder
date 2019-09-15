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

bool judge(int x, vector<int> d) {
    bool flag = true;
    while(x>0 && flag) {
        if(find(ALL(d),x%10) != d.end()) {
            flag = false;
        }
        x /= 10;
    }
    return flag;
}

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    int n,k; cin >> n >> k;
    vector<int> d(k);
    REP(i,k) cin >> d[i];
    int ans = 0, idx = 1;
    FOR(i,n,1000000) {
        if(judge(i,d)) {
            ans = i;
            break;
        }
    }
    cout << ans << endl;
    return 0;
}