#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    int count = 0;
    for(int i = 0; i < n; i ++) {
        int l,r; cin >> l >> r;
        count += r-l+1;
    }
    cout << count << endl;
}