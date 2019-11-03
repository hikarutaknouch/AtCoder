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

bool judge(int x) {
    bool res = true;
    vector<int> v;
    while(x>0) {
        int tmp = x%10;
        v.emplace_back(tmp);
        x /= 10;
    }
    REP(i,v.size()-1) {
        if(v[i]!=v[i+1]) {
            res = false;
            break;
        }
    }
    return res;
}

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    int n; cin >> n;
    int cnt = 0, num = 0;
    while(cnt<n) {
        ++ num;
        if(num<10) {
            ++ cnt;
            continue;
        }
        if(judge(num)) ++ cnt;
    }
    int ans = num;
    cout << ans << endl;
    return 0;
}