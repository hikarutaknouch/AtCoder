#include <bits/stdc++.h>
using namespace std;

int main() {
    int p; cin >> p;
    int price;
    int n;
    string t;
    if(p == 1) {
        cin >> price;
        cin >> n;
        cout << price * n << endl;
    }
    else {
        cin >> t;
        cin >> price;
        cin >> n;
        cout << t << "!" << endl;
        cout << price * n << endl;
    }
}