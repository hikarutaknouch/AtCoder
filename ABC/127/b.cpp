#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<long> x(11);
    long r,d; cin >> r >> d >> x[0];
    for(int i = 1; i < 11; i ++) {
        x[i] = x[i-1]*r - d;
        cout << x[i] << endl;
    }
}