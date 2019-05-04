#include <bits/stdc++.h>
using namespace std;

int main() {
    string s; cin >> s;
    char i = s[0];
    char j = s[s.size()-1];
    cout << i << s.size()-2 << j << endl;
}