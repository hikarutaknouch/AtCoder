#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    vector<char> c(n);
    for (int i = 0; i < n; i ++) cin >> c.at(i);
    sort(c.begin(), c.end());
    c.erase(unique(c.begin(),c.end()), c.end());
    cout << (c.size() == 3 ? "Three" : "Four") << endl;
}