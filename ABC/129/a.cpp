#include <bits/stdc++.h>
#define REP(i, n) for(int i = 0; i < n; i++)

using namespace std;

typedef long long ll;
typedef pair<ll, ll> p;

const ll MOD = 1000000007;

int main() {
    vector<int> a(3); cin >> a[0] >> a[1] >> a[2];
    sort(a.begin(), a.end());
    cout << a[0] + a[1] << endl;
    return 0;
}