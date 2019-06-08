#include <bits/stdc++.h>
#define REP(i, n) for(int i = 1; i < n; i++)
#define REPP(i, n) for(int i = n-1; i >= 0; i--)

using namespace std;

const int MOD = 1000000007;

int main() {
    int n; cin >> n;
    string s; cin >> s;
    vector<int> w(n, 0);
    vector<int> e(n, 0);
    if(s[0]=='W') w[0]=1;
    REP(i,n) {
        w[i] = (s[i]=='W' ? w[i-1]+1 : w[i-1]);
    }
    if(s[n-1]=='E') e[n-1]=1;
    REPP(i,n-1) {
        e[i] = (s[i]=='E' ? e[i+1]+1 : e[i+1]);
    }
    int ans = MOD;
    for(int i = 0; i < n; i++) {
        if(i==0) ans = min(ans, e[1]);
        else if(i==n-1) ans = min(ans, w[n-2]);
        else ans = min(ans, w[i-1]+e[i+1]);
    }
    cout << ans << endl;
    return 0;
}