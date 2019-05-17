#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,m; cin >> n >> m;
    vector<vector<int>> ab(n, vector<int>(2));
    vector<vector<int>> cd(m, vector<int>(2));
    for(int i = 0; i < n; i ++) cin >> ab[i][0] >> ab[i][1];
    for(int i = 0; i < m; i ++) cin >> cd[i][0] >> cd[i][1];
    for(int i = 0; i < n; i++) {
        vector<int> ans(m);
        for(int j = 0; j < m; j++) {
            ans[j] = abs(ab[i][0]-cd[j][0]) + abs(ab[i][1]-cd[j][1]);
        }
        vector<int>::iterator iter = min_element(ans.begin(), ans.end());
        cout << distance(ans.begin(), iter) + 1 << endl;
    }
    return 0;
}