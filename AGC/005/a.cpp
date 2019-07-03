#include <bits/stdc++.h>
#define REP(i, n) for(int i = 0; i < n; ++i)
#define REPP(i, n) for(int i = 1; i <= n; ++i)
#define REPR(i, n) for(int i = n; i >= 0; --i)
#define FOR(i, m, n) for(int i = m; i < n; ++i)
#define ALL(v) v.begin(), v.end()
#define UNIQUE(v) v.erase(unique(v.begin(), v.end()), v.end());
using namespace std;
typedef long long ll;
typedef pair<ll, ll> p;
const ll MOD = 1000000007;

int main() {
    string x; cin >> x;
    int n = x.length();
    stack<char> st;
    REP(i,n) {
        if(x[i]=='S') st.push(x[i]);
        else {
            if(!st.empty() && st.top()=='S') st.pop();
            else st.push(x[i]);
        }
    }
    cout << st.size() << endl;
    return 0;
}