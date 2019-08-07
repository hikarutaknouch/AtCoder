#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, a; cin >> n >> a;
    int t = n/3;
    int MIN = (a%3!=0 ? a/3 + 1 : a/3);
    int MAX = min(t, a);
    cout << MIN << " " << MAX << endl;
}