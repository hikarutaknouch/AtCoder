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
struct BinaryIndexedTree {
    vector<T> data;
    int n;
    BinaryIndexedTree(int n, T x) : n(n), data(n+1,x) {}
    T sum(int i) {
        T res = 0;
        for(++i; i>0; i -= (i&-i)) res += data[i];
        return res;
    }
    void add(int i, T x) {
        for(++i; i <= n; i += i&-i) data[i] += x;
    }
    int lower_bound(int k) {
        if(k <= 0) return 0;
        int res = 0, i = 1;
        while(i<n) i *= 2;
        for(; i>0; i/=2) {
            if(res+i <= n && data[res+i] < k) {
                k -= data[res+i];
                res += i;
            }
        }
        return res + 1;
    }
};

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    int q; cin >> q;
    BinaryIndexedTree<ll> bit(200000,0);
    REP(i,q) {
        int t,x; cin >> t >> x;
        if(t==1) bit.add(x,1);
        else {
            int val = bit.lower_bound(x); --val;
            cout << val << '\n';
            bit.add(val,-1);
        }
    }
    return 0;
}