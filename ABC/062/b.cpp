#include <bits/stdc++.h>
using namespace std;

int main() {
    int h,w; cin >> h >> w;
    string s = "";
    for(int i = 0; i < w+2; i ++) s += '#';
    cout << s << endl;
    for(int i = 0; i < h; i ++) {
        string a; cin >> a;
        cout << '#' << a << '#' << endl;
    }
    cout << s << endl;
}