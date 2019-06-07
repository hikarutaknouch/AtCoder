#include <bits/stdc++.h>
#define REP(i, n) for(int i = 0; i < n; i++)

using namespace std;

int main() {
    string s; cin >> s;
    REP(i, s.length()) {
        if(s[i]=='O') s[i] = 'A';
        else if(s[i]=='A') s[i] = 'O';
        else continue;
    }
    cout << s << endl;
    return 0;
}