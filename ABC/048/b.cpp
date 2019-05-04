#include <bits/stdc++.h>
using namespace std;

long count(long n, long x) {
    long count = 0;
    if(n==-1) return 0;
    return n/x + 1;
}
int main() {
    long a,b,x; cin >> a >> b >> x;
    cout << (count(b,x) - count(a-1,x)) << endl;
}