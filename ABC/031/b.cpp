#include <bits/stdc++.h>
#define REP(i, n) for(int i = 0; i < n; i++)

using namespace std;
typedef long long ll;

int main() {
    int l,h,n; cin >> l >> h >> n;
    REP(i,n) {
        int a; cin >> a;
        cout << (a>=l && a<=h ? 0 : (a>h ? -1 : l-a)) << endl;
    }
    return 0;
}