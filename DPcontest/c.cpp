#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    vector<vector<int>> abc(n, vector<int>(3));
    for(int i = 0; i < n; i ++) cin >> abc[i][0] >> abc[i][1] >> abc[i][2];
    vector<vector<int>> dp(n, vector<int>(3));
    dp[0] = {abc[0][0], abc[0][1], abc[0][2]};
    for(int i = 1; i < n; i++) {
        dp[i] = {abc[i][0]+max(dp[i-1][1], dp[i-1][2]), abc[i][1]+max(dp[i-1][0], dp[i-1][2]), abc[i][2]+max(dp[i-1][0], dp[i-1][1])};
    }
    cout << *max_element(dp[n-1].begin(), dp[n-1].end()) << endl;
}