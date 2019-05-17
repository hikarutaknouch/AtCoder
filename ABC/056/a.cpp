#include <bits/stdc++.h>
using namespace std;

int main() {
    char a,b; cin >> a >> b;
    cout << (a=='H' && b=='H' || a=='D' && b=='D' ? "H" : "D") << endl;
}