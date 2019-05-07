#include <bits/stdc++.h>
using namespace std;

int main() {
    string a,b,c; cin >> a >> b >> c;
    string ans;
    ans += a[0];
    ans += b[0];
    ans += c[0];
    transform(ans.begin(), ans.end(), ans.begin(), ::toupper);
    cout << ans << endl;
}