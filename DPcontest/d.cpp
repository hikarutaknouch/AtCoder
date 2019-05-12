#include <bits/stdc++.h>
using namespace std;

int main() {
    int N,W; cin >> N >> W;
    vector<int> w(N);
    vector<int> v(N);
    for(int i = 0; i < N; i ++) cin >> w[i] >> v[i];
    vector<vector<long long>> dp(N+1, vector<long long>(W+1));
    for(int i = 0; i < N; i ++) {
        for(int sumw = 0; sumw <= W; sumw ++) {
            if(sumw-w[i]>=0) dp[i+1][sumw] = max(dp[i+1][sumw], dp[i][sumw-w[i]]+v[i]);
            dp[i+1][sumw] = max(dp[i+1][sumw], dp[i][sumw]);
        }
    }
    cout << dp[N][W] << endl;
}