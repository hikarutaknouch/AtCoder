#include <bits/stdc++.h>
using namespace std;

int main() {
    string n; cin >> n;
    int count = 0;
    for(int i = 0; i < n.size(); i ++) {
        if(n[i]=='9') count ++;
    }
    cout << (count > 0 ? "Yes" : "No") << endl;
}