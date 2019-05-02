#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,m; cin >> n >> m;
    vector<int> l(n);
    for(int i = 0; i < m; i ++) {
        int a,b; cin >> a >> b;
        l.at(a-1) ++; l.at(b-1) ++;
    }
    for(int i = 0; i < n; i ++) cout << l.at(i) << endl;
}