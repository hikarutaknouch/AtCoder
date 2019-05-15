#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    int ng1, ng2, ng3; cin >> ng1 >> ng2 >> ng3;
    if(n==ng1 || n==ng2 || n==ng3) {
        cout << "NO" << endl;
        return 0;
    }
    vector<int> dp(n+10, 100000);
    dp[n] = 0;
    for(int i = n-1; i >= 0; i --) {
        if(i==ng1 || i==ng2 || i==ng3) continue;
        dp[i] = min({dp[i+1], dp[i+2], dp[i+3]})+1;
    }
    cout << (dp[0]>100 ? "NO" : "YES") << endl;
}