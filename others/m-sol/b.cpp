#include <bits/stdc++.h>
using namespace std;

int main() {
    string s; cin >> s;
    int n = s.length();
    int v = 0;
    for(int i = 0; i < n; i ++) {
        if(s[i]=='o') v++;
    }
    cout << (15-n+v >= 8 ? "YES" : "NO") << endl;
    return 0;
}