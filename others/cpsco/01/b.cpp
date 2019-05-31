#include <bits/stdc++.h>
using namespace std;

int main() {
    string s; cin >> s;
    int n = s.length();
    vector<int> l(26, 0);
    for(int i = 0; i < n; i ++) l[s[i]-97] ++;
    bool ans = 1;
    sort(l.begin(), l.end(), greater<int>());
    for(int i = 1; i < 26; i ++) {
        if(l[i]==0) break;
        if(l[i]!=l[i-1]) {
            ans = 0;
            break;
        }
    }
    cout << (ans ? "Yes" : "No") << endl;
}