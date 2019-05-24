#include <bits/stdc++.h>
using namespace std;

int main() {
    int w,h; cin >> w >> h;
    cout << (w%16==0 && h%9==0 ? "16:9" : "4:3") << endl;
}