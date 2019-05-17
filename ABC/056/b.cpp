#include <bits/stdc++.h>
using namespace std;

int main() {
    int w,a,b; cin >> w >> a >> b;
    int ans = max(a,b) - (w+min(a,b));
    cout << (ans>0 ? ans : 0) << endl;
}