#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m; cin >> n >> m;
    int r = n;
    int l = 0;
    for(int i = 0; i < m; i ++) {
        int x,y; cin >> x >> y;
        l = max(l,x);
        r = min(r,y);
    }
    cout << (r-l>=0 ? r-l+1 : 0) << endl;
}