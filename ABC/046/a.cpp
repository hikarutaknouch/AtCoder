#include <bits/stdc++.h>
using namespace std;

int main() {
    int a,b,c; cin >> a >> b >> c;
    cout << (a==b && b==c ? 1 : (a!=b && b!=c && c!=a? 3 : 2)) << endl;
}