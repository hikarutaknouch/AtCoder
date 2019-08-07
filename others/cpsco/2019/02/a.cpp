#include <bits/stdc++.h>
#define REP(i, n) for(int i = 0; i < n; i++)

using namespace std;

int main() {
    int m,n; cin >> m >> n;
    int ans = m;
    REP(i,n-1) ans -= m/n;
    cout << ans << endl;
    return 0;
}