#include <bits/stdc++.h>
#define REP(i, n) for(int i = 0; i < n; ++i)
#define REPP(i, n) for(int i = 1; i <= n; ++i)
#define REPR(i, n) for(int i = n; i >= 0; --i)
#define FOR(i, m, n) for(int i = m; i < n; ++i)
#define ALL(v) v.begin(), v.end()
#define UNIQUE(v) v.erase(unique(v.begin(), v.end()), v.end());
using namespace std;
typedef long long ll;
typedef pair<ll, ll> p;
const ll MOD = 1000000007;
const int PRIME_NUM[25] = {2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,53,59,61,67,71,73,79,83,89,97};

void factoring(vector<int> &v, int x) {
    int i = 0;
    while (x>1 || i<25) {
        if(x%PRIME_NUM[i]==0) {
            v[i]++;
            x/=PRIME_NUM[i];
        }
        else i++;
    }
    return;
}

int main() {
    int n; cin >> n;
    vector<int> f(25,1);
    FOR(i,2,n+1) {
        factoring(f, i);
    }
    int ans = 0;
    REP(i,25) {
        if(f[i]==1) continue;
        ans += (f[i]>=75);
        FOR(j,i+1,25) {
            ans += (f[i]>=3 && f[j]>=25);
            ans += (f[i]>=5 && f[j]>=15);
            ans += (f[i]>=25 && f[j]>=3);
            ans += (f[i]>=15 && f[j]>=5);
            if(f[j]==1) continue;
            FOR(k,j+1,25) {
                if(f[k]==1) continue;
                ans += (f[i]>=3 && f[j]>=5 && f[k]>=5);
                ans += (f[i]>=5 && f[j]>=3 && f[k]>=5);
                ans += (f[i]>=5 && f[j]>=5 && f[k]>=3);
            }
        }
    }
    cout << ans << endl;
    return 0;
}