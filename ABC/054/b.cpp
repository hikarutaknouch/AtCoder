#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,m; cin >> n >> m;
    vector<string> a(n);
    vector<string> b(m);
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < m; i++) cin >> b[i];

    for(int i = 0; i <= n-m; i ++) {
        for(int j = 0; j <= n-m; j ++) {
            for(int k = j; k < j+m; k ++) {
                if(a[k].substr(i,m) != b[k-j]) break;
                if(k==j+m-1) {
                    cout << "Yes" << endl;
                    return 0;
                }
            }
        }
    }
    cout << "No" << endl;
}