//not accepted
//この問題はまだ早かった
#include <bits/stdc++.h>
#define REP(i, n) for(int i = 0; i < n; i++)

using namespace std;

typedef long long ll;
typedef pair<ll, ll> p;

const ll MOD = 10e9+7;

int main() {
    int n,a,b,c,d; cin >> n >> a >> b >> c >> d;
    a --; b--; c--; d--;
    string s; cin >> s;
    bool ans = 1;
    REP(a,max(c,d)) {
        if(s[i]=='#' && s[i+1]=='#') {
            ans = 0;
            break;
        }
    }
    cout << (ans ? "Yes" : "No") << endl;
    return 0;
}