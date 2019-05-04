#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    vector<int> t(n);
    for(int i = 0; i < n; i ++) cin >> t.at(i);
    int sum = accumulate(t.begin(), t.end(), 0);
    int m; cin >> m;
    vector<int> p(m);
    vector<int> x(m);
    for(int i = 0; i < m; i ++) cin >> p.at(i) >> x.at(i);
    for(int i = 0; i < m; i ++) {
        int ans = sum - t[p[i]-1] + x[i];
        cout << ans << endl;
    }
}