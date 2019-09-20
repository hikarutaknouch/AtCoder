#include <bits/stdc++.h>
using namespace std;

int main() {
    long long x,y; cin >> x >> y;
    if(x%y==0) {
        cout << -1 << endl;
        return 0;
    }
    for(long long i = 2; i < 10e7; i ++) {
        if(x*i%y != 0) {
            cout << x*i << endl;
            return 0;
        } 
    }
}