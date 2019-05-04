#include <bits/stdc++.h>
using namespace std;

int main() {
    string s; cin >> s;
    unordered_set<int> a;
    for(int i = 0; i < s.size(); i ++) a.insert(s[i]);
    cout << (s.size()==a.size() ? "yes" : "no") << endl;
}