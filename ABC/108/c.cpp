#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,k; cin >> n >> k;
    vector<long long> l(k);
    for(int i = 1; i <= n; i ++) l[i%k] ++;
    long long ans = 0;
    for(int a = 0; a < k; a ++) {
        int b = (k-a)%k;
        int c = (k-a)%k;
        if((b+c)%k != 0) continue;
        ans += l[a] * l[b] * l[c];
    }
    cout << ans << endl;
}