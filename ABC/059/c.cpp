#include <bits/stdc++.h>
#define REP(i, n) for(int i = 0; i < n; i++)
#define REPP(i, n) for(int i = 1; i <= n; i++)
#define REPR(i, n) for(int i = n; i >= 0; i--)
#define FOR(i, m, n) for(int i = m; i < n; i++)
#define ALL(v) v.begin(), v.end()
#define UNIQUE(v) v.erase(unique(v.begin(), v.end()), v.end());
using namespace std;
typedef long long ll;
typedef pair<ll, ll> p;
const ll MOD = 1000000007;

int main() {
    int n; cin >> n;
    vector<ll> a(n);
    REP(i,n) cin >> a[i];
    bool flag = true;
    ll sum = 0;
    ll plus = 0;
    REP(i,n) {//+-+-なかんじで
        sum += a[i];
        if(flag && sum<=0) {
            plus += abs(sum)+1;
            sum = 1;
        }
        if(!flag && sum>=0) {
            plus += abs(sum)+1;
            sum = -1;
        }
        flag = !flag;
    }
    flag = false;
    sum = 0;
    ll minus = 0;
    REP(i,n) {//-+-+なかんじで
        sum += a[i];
        if(flag && sum<=0) {
            minus += abs(sum)+1;
            sum = 1;
        }
        if(!flag && sum>=0) {
            minus += abs(sum)+1;
            sum = -1;
        }
        flag = !flag;
    }
    cout << min(minus,plus) << endl;
    return 0;
}