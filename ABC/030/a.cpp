#include <bits/stdc++.h>
#define REP(i, n) for(int i = 0; i < n; i++)

using namespace std;

int main() {
    double a,b,c,d; cin >> a >> b >> c >> d;
    cout << (b/a == d/c ? "DRAW" : (b/a > d/c ? "TAKAHASHI" : "AOKI")) << endl;
}