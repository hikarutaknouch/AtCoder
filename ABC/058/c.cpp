#include <bits/stdc++.h>
using namespace std;
const int INF = 10e6;

int main() {
    int n; cin >> n;
    vector<vector<int>> l(n, vector<int>(26));
    for(int i = 0; i < n; i ++) {
        string s; cin >> s;
        for(int j = 0; j < s.length(); j ++) l[i][s[j]-97] ++;
    }
    string ans = "";
    for(int i = 0; i < 26; i ++) {
        int cnt = INF;
        for(int j = 0; j < n; j ++) {
            if(l[j][i] == 0) break;
            else cnt = min(cnt, l[j][i]);
            if(j==n-1) {
                char x = (char)i+97;
                for(int k = 0; k < cnt; k ++) ans += x;
            }
        }
    }
    cout << ans << endl;
    return 0;
}