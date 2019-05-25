#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m; cin >> n >> m;
    int r = n;
    int l = 0;
    int R = 0;
    int L = n;
    for(int i = 0; i < m; i ++) {
        int x,y; cin >> x >> y;
        l = max(l,x);
        r = min(r,y);
        L = min(L,x);
        R = max(R,y);
    }
    cout << (R-L>=0 && r-l>=0 ? r-l+1 : 0) << endl;
}