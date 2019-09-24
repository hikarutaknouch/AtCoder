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

template<typename Monoid>
struct SegmentTree {
    using F = function<Monoid(Monoid, Monoid)>;
    vector<Monoid> data;
    int n;
    const F f;
    const Monoid M;
    SegmentTree(int x, const F f, const Monoid &M) : f(f), M(M) {
        n = 1;
        while(n<x) n <<= 1;
        data.resize(2*n,M);
    }
    void set(int k, const Monoid &p) {
        data[k+n] = p;
    }
    void build() {
        for(int k = n-1; k > 0; --k) {
            data[k] = f(data[2*k + 0], data[2*k + 1]);
        }
    }
    void update(int k, const Monoid &p) {
        k += n;
        data[k] = p;
        while (k >>= 1) {
            data[k] = f(data[k*2], data[k*2 + 1]);
        }
    }
    Monoid query(int a, int b) {
        Monoid L = M, R = M;
        for(a += n, b += n; a<b; a >>= 1, b >>= 1) {
            if(a&1) L = f(L, data[a++]);
            if(b&1) R = f(data[--b], R);
        }
        return f(L,R);
    }
    Monoid operator[](const int &k) const {
        return data[k+n];
    }
};

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    int n,k; cin >> n >> k;
    vector<int> p(n);
    SegmentTree<int> segmin(n, [](int a,int b){return min(a,b);}, INT_MAX);
    SegmentTree<int> segmax(n, [](int a,int b){return max(a,b);}, INT_MIN);
    REP(i,n) {
        cin >> p[i];
        segmin.update(i,p[i]);
        segmax.update(i,p[i]);
    }
    vector<int> cnt(n);
    REP(i,n-1) {
        cnt[i+1] = cnt[i] + (p[i]>p[i+1]);
    }
    int ans = 1;
    bool flag = (cnt[k-1]-cnt[0]>0);
    REP(i,n-k) {
        int x = segmin.query(i,i+k+1);
        int y = segmax.query(i,i+k+1);
        if((flag || cnt[i+k]-cnt[i+1]>0) && (p[i]!=x || p[i+k]!=y)) {
            if(cnt[i+k]-cnt[i+1]==0) flag = false;
            ++ ans;
        }
    }
    cout << ans << endl;
    return 0;
}