#include <bits/stdc++.h>
using namespace std;

int main() {
    int a,b,c; cin >> a >> b >> c;
    int sum = a + b + c;
    int m = max({a, b, c});
    cout << (sum-m == m ? "Yes" : "No") << endl;
}