#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k; cin >> n >> k;
    if(k%2==1) {
        long long x = n/k;
        cout << x*x*x << endl;
    }
    else {
        long long x = n/k;
        long long y = (n + (k/2)) / k;
        cout << x*x*x + y*y*y << endl;
    }
}