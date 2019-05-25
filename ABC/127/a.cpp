#include <bits/stdc++.h>
using namespace std;

int main() {
    int a,b; cin >> a >> b;
    int ans = 0;
    if(a>=13) ans = b;
    else if(a>=6 && a<=12) ans = b/2;
    else ans = 0;
    cout << ans << endl;
}