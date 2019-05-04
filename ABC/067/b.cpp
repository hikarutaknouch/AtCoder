#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,k; cin >> n >> k;
    vector<int> l(n);
    for(int i =0 ;i < n; i ++) cin >> l[i];
    sort(l.begin(), l.end());
    int ans;
    for(int i = 1; i <= k; i ++) ans += l[n-i];
    cout << ans << endl;
}