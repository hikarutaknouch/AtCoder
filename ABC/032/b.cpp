#include <bits/stdc++.h>
#define REP(i, n) for(int i = 0; i < n; i++)

using namespace std;

typedef long long ll;

int main() {
    string s; cin >> s;
    int k; cin >> k;
    unordered_set<string> pass;
    REP(i, max(0,(int)s.length()-k+1)) {
        string tmp = s.substr(i, k);
        pass.insert(tmp);
    }
    cout << pass.size() << endl;
}