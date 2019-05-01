#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    vector<int> c(n);
    for(int i = 0; i < n; i ++) {
        int a; cin >> a;
        while(a%2==0) {
            c[i]++;
            a /= 2;
        }
    }
    int ans = *min_element(c.begin(), c.end());
    cout << ans << endl;
}