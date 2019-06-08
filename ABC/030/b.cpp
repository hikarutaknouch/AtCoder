#include <bits/stdc++.h>
#define REP(i, n) for(int i = 0; i < n; i++)

using namespace std;

int main() {
    double n,m; cin >> n >> m;
    n = (n>=12 ? n-12 : n)*5 + m/12;
    cout << (abs(n-m)*6 >= 180 ? 360 - abs(n-m)*6 : abs(n-m)*6) << endl;
    return 0;
}