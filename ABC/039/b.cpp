#include <bits/stdc++.h>
using namespace std;

int main() {
    int x; cin >> x;
    if(x==1) {
        cout << 1 << endl;
        return 0;
    }
    for (double i = 1; i < x/4; i++) {
        if(pow(i, 4) == x) {
            cout << i << endl;
            return 0;
        }
    }
}