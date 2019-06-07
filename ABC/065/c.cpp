#include <bits/stdc++.h>
#define REP(i, n) for(int i = 0; i < n; i++)

using namespace std;

typedef long long ll;

const ll MOD = 1000000007;

ll factorial(ll N) {
    if(N==0) return 1;
    return (N * factorial(N-1))%MOD;
}

int main() {
    ll n,m; cin >> n >> m;
    ll ans = 0;
    if(abs(n-m)==1) ans = (factorial(n) * factorial(m))%MOD;
    if(abs(n-m)==0) ans = (factorial(n) * factorial(m) * 2)%MOD;
    cout << ans << endl;
    return 0;
}