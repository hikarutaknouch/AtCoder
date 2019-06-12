#include <bits/stdc++.h>
#define REP(i, n) for(int i = 0; i < n; i++)
using namespace std;
typedef long long ll;
typedef pair<ll, ll> p;
const ll MOD = 1000000007;

int main() {
    vector<int> l(3);
    REP(i,3) cin >> l[i];
    sort(l.begin(), l.end());
    cout << (l[0]==l[1] ? l[2] : l[0]) << endl;
    return 0;
}