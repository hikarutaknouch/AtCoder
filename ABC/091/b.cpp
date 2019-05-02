#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    vector<string> s(n);
    for(int i = 0; i < n; i ++) cin >> s[i];
    int m; cin >> m;
    vector<string> t(m);
    for(int i = 0; i < m; i ++) cin >> t[i];
    vector<int> ans(n);
    for(int i = 0; i < n; i ++) {
        for(int j = 0; j < n; j ++) {
            if(s[i]==s[j]) ans[i] ++;
        }
        for(int j = 0; j < m; j ++) {
            if(s[i]==t[j]) ans[i] --;
        }
    }
    cout << max(*max_element(ans.begin(), ans.end()), 0) << endl;
}