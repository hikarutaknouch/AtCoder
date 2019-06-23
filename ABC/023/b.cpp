#include <bits/stdc++.h>
#define REP(i, n) for(int i = 0; i < n; i++)
#define REPR(i, n) for(int i = n; i >= 0; i--)
#define FOR(i, m, n) for(int i = m; i < n; i++)
#define ALL(v) v.begin(), v.end()
using namespace std;
typedef long long ll;
typedef pair<ll, ll> p;
const ll MOD = 1000000007;

int main() {
    int n;cin >> n;
    string s; cin >> s;
    string tmp = "b";
    int i = 1;
    while(tmp.length()<s.length()) {
        if(i%3==0) {
            string tmpp = tmp;
            tmp = 'b' + tmpp + 'b';
        }
        else if(i%3==1) {
            string tmpp = tmp;
            tmp = 'a' + tmpp + 'c';
        }
        else {
            string tmpp = tmp;
            tmp = 'c' + tmpp + 'a';
        }
        i ++;
    }
    cout << (tmp==s ? i-1 : -1) << endl;
    return 0;
}