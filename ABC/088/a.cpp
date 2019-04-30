#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, a;
    cin >> n;
    cin >> a;
    n %= 500;
    if(n<=a) cout << "Yes" << endl;
    else cout << "No" << endl;
}