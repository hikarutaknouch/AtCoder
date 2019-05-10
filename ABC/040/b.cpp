#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    vector<int> l(n);
    for (int i = 1; i <= n; i++) {
        l[i-1] = abs(i-n/i) + n%i;
    }
    cout << *min_element(l.begin(),l.end()) << endl;
}