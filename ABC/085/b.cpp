#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    unordered_set<int> d;
    for(int i = 0; i < n; i ++) {
        int tmp; cin >> tmp;
        d.insert(tmp);
    }
    cout << d.size() << endl;
}