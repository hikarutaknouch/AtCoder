#include <bits/stdc++.h>
using namespace std;

int main() {
    string n; cin >> n;
    unordered_set<char> ans;
    for(int i = 0; i < n.length(); i ++) {
        ans.insert(n[i]);
    }
    cout << (ans.size() == 1 ? "SAME" : "DIFFERENT") << endl;
}