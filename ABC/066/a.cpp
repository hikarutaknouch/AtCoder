#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> s(3);
    for(int i = 0; i < 3; i ++) cin >> s[i];
    sort(s.begin(), s.end());
    cout << s[0] + s[1] << endl;
}