#include <bits/stdc++.h>
using namespace std;

int main() {
    long long a,b,c,k; cin >> a >> b >> c >> k;
    long long t,n;
    if(k%2==1) {
        t = (k * (k-1))*a + (k * (k-1) + 1)*(b+c);
        n = (k * (k-1))*b + (k * (k-1) + 1)*(a+c);
    }
    else {
        t = ((k * (k+1))/2 + 1) * a + (k * (k+1))/2 * (b+c);
        n = ((k * (k+1))/2 + 1) * b + (k * (k+1))/2 * (a+c);
    }
    if(abs(t-n)>10e18) cout << "Unfair" << endl;
    else cout << t-n << endl;
    return 0;
}