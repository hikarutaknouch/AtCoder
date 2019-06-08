#include <bits/stdc++.h>
using namespace std;

int main() {
    int a,d; cin >> a >> d;
    cout << (a*(d+1) >= (a+1)*d ? a*(d+1) : (a+1)*d) << endl;
}