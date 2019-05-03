#include <bits/stdc++.h>
using namespace std;

int main() {
    double n; cin >> n;
    for(int i= n; i > 0; i --) {
        int j = sqrt(n);
        if(i==pow(j,2)) {
            cout << i << endl;
            return 0;
        }
    }
}