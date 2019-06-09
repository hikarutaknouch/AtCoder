//WA (重み付きunion findというデータ構造を使うらしい...)
#include <bits/stdc++.h>
#define REP(i, n) for(int i = 0; i < n; i++)
#define REPP(i, n) for(int i = 1; i < n; i++)

using namespace std;

int main() {
    int n,m; cin >> n >> m;
    vector<int> x(n, 0);
    vector<int> l(m);
    vector<int> r(m);
    vector<int> d(m);
    REP(i,m) {
        cin >> l[i] >> r[i] >> d[i]; l[i]--; r[i]--;
        x[r[i]] = x[l[i]] + d[i];
    }
    vector<int> s(n+1);
    s[0] = x[0];
    REPP(i,n+1) s[i] = s[i-1] + x[i-1];
    bool ans = 1;
    REP(i,m) {
        if(s[r[i]+1] - s[l[i]+1] != d[i]) {
            ans = 0;
            break;
        }
    }
    cout << (ans ? "Yes" : "No") << endl;
    return 0;
}