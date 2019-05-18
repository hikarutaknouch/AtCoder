#include <bits/stdc++.h>
using namespace std;


int main() {
    int N,T; cin >> N >> T;
    vector<int> t(N);
    for(int i = 0; i < N; i ++) cin >> t[i];
    int s = 0;
    int ans = T;
    for(int i = 0; i < N-1; i++) {
        int now = t[i+1] - t[i];
        ans += min(now,T);
    }
    cout << ans << endl;
}