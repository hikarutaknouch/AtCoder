#include <bits/stdc++.h>
using namespace std;

int main() {
    string o,e; cin >> o >> e;
    string ans;
    for (int i = 0; i < o.length()+e.length(); i++) {
        if(i%2==1) ans += e[i/2];
        else ans += o[i/2];
    }
    cout << ans << endl;
}