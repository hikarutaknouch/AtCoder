#include <bits/stdc++.h>
using namespace std;

int main() {
    long a,b,c; cin >> a >> b >> c;
    long ans = ((a*b)%1000000007)*c%1000000007;
    cout << ans << endl;
}