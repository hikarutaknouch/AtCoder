#include <bits/stdc++.h>
using namespace std;

int main() {
    string c1; cin >> c1;
    string c2; cin >> c2;
    if(c1[0]==c2[2] && c1[1]==c2[1] && c1[2]==c2[0]) cout << "YES" << endl;
    else cout << "NO" << endl;
}