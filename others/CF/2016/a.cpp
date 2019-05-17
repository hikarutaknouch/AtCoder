#include <bits/stdc++.h>
using namespace std;

int main() {
    string s; cin >> s;
    string s1 = s.substr(0,4);
    string s2 = s.substr(4,8);
    cout << s1 + " " + s2 << endl;
}