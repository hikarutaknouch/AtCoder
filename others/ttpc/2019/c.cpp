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
    int n,x; cin >> n >> x;
    vector<ll> a(n);
    int y = x;
    REP(i,n) {
        cin >> a[i];
        if(a[i]!=-1) y ^= a[i];
    }
    REP(i,n) if(a[i]==-1) {
        int z = min(x,y);
        y ^= z;
        a[i] = z;
    }
    if(y>0) cout<<-1<<endl;
    else REP(i,n) cout << a[i] << (i<n-1 ? ' ' : '\n');
    return 0;
}