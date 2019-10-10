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

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    int n; cin >> n;
    vector<int> a(n);
    int m = 0;
    REP(i,n) {
        cin >> a[i];
        chmax(m,a[i]);
    }
    sort(ALL(a));
    pair<int,int> ans = {0,0};
    ans.first = m;
    int diff = INT_MAX;
    REP(i,n-1) {
        int tmp = abs(2*a[i] - m);
        if(diff>tmp) {
            diff = tmp;
            ans.second = a[i];
        }
    }
    cout << ans.first << ' ' << ans.second << endl;
    return 0;
}