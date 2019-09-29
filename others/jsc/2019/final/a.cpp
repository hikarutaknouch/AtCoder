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

bool compare_by_b(pair<int, int> a, pair<int, int> b) {
    if(a.second != b.second){
        return a.second < b.second;
    }else{
        return a.first < b.first;
    }
}

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    int n,m; cin >> n >> m;
    vector<int> a(n),b(m);
    REP(i,n) cin >> a[i];
    REP(i,m) cin >> b[i];
    using P = pair<int,int>;
    const int N = 2*10e6;
    vector<P> v(N, P(-1,-1));
    int x,y,z,w;
    bool flag = false;
    [&] {
        REP(i,n) REP(j,m) {
            int num = a[i]+b[j];
            if(v[num].first != -1) {
                x = v[num].first;
                y = v[num].second;
                z = i;
                w = j;
                flag = true;
                return;
            }
            v[num] = pair<int,int>(i,j);
        }
    }();
    if(flag) cout << x << ' ' << y << ' ' << z << ' ' << w << endl;
    else cout << -1 << endl;
    return 0;
}