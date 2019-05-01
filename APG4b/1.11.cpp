#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, a; cin >> n >> a;
    for(int i = 0; i < n; i ++) {
        string op;
        int b;
        cin >> op >> b;
        if(op == "+") a += b;
        else if(op == "-") a -= b;
        else if(op == "*") a *= b;
        else {
            if(b==0) {
                cout << "error" << endl;
                break;
            }
            a /= b;
        }
        cout << i+1 << ":" << a << endl;
    }
}