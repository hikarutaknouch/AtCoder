#include <bits/stdc++.h>
using namespace std;

int main() {
    double n,k; cin >> n >> k;
    double ans = 0.0;
    for(double i = 1; i <= n; i ++) {
        int p = i;
        double c = 0.0;
        while(p<k) {
            p*=2.0;
            c ++;
        }
        ans += pow(0.5, c)/n;
    }
    cout << setprecision(14) << ans << endl;
    return 0;
}