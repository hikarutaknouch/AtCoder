//未完
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    vector<int> p(n+1);
    for(int i = 0; i < n; i ++) cin >> p[i];
    vector<int> dp(n+1);
    dp[0] = 1;
    dp[1] = 2;
    for(int i = 1; i < n; i ++) {
        dp[i+1] = dp[i] + 2;
        for(int j = 0; j < i; j ++) {
            if(p[i]==p[j]) {
                dp[i+1] = dp[i] + 1;
                break;
            }
        }
    }
    cout << dp[n] << endl;
}