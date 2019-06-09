#include <bits/stdc++.h>
#define REP(i, n) for(int i = 0; i < n; i++)

using namespace std;

int main() {
    string s; cin >> s;
    vector<int> l(6, 0);
    REP(i,s.length()) l[s[i]-65] ++;
    REP(i,6) {
        if(i==5) cout << l[i] << endl;
        else cout << l[i] << " ";
    }
    return 0;
}