//未完
#include <bits/stdc++.h>
using namespace std;

int main() {
    string s,t; cin >> s >> t;
    vector<vector<int>> c(26, vector<int>(26, 0));
    for(int i = 0; i < s.length(); i ++) {
        c[s[i]-97][t[i]-97] = 2;
        if(s[i]!=t[i]) {
            if(c[s[i]-97][s[i]-97]>0) c[s[i]-97][t[i]-97] = 1;
        }
    }
    int count = 0;
    for(int i = 0; i < 26; i ++) {
        for(int j = 0; j < 26; j ++) {
            if(c[i][j]==c[j][i]) continue;
            if(c[i][j]!=c[j][i]) count += c[i][j];
        }
    }
    cout << count << endl;
    cout << (count%2==0 ? "Yes" : "No") << endl;
    return 0;
}