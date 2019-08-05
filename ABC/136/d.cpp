#include <bits/stdc++.h>
#define REP(i, n) for(int i = 0; i < n; ++i)
#define REPP(i, n) for(int i = 1; i <= n; ++i)
#define REPR(i, n) for(int i = n; i >= 0; --i)
#define FOR(i, m, n) for(int i = m; i < n; ++i)
#define ALL(v) v.begin(), v.end()
#define UNIQUE(v) v.erase(unique(v.begin(), v.end()), v.end());
using namespace std;
typedef long long ll;
typedef pair<ll, ll> P;
const ll MOD = 1000000007;
const ll INF = 1000000000;

int main() {
    ifstream in("input.txt");
    cin.rdbuf(in.rdbuf());
    string s; cin >> s;
    int n = s.length();
    vector<int> ans(n, 0);
    int left;
    REP(right,n) {
        int r = 1;
        while(s[right+1]=='R' && right+1<n) {
            right ++;
            r ++;
        }
        int l = 0;
        left = right;
        while (s[left+1]=='L' && left+1<n) {
            left++;
            l++;
        }
        if((r+l)%2==0) {
            ans[right] = (r+l)/2;
            ans[right+1] = (r+l)/2;
        }
        else {
            if(r%2==1) {
                ans[right] = r/2 + 1 + l/2;
                ans[right+1] = r/2 + l/2;
            }
            else {
                ans[right] = r/2 + l/2;
                ans[right+1] = r/2 + l/2 + 1;
            }
        }
        right = left;
    }
    REP(i,n) {
        if(i==n-1) cout << ans[i] << endl;
        else cout << ans[i] << " ";
    }
    return 0;
}