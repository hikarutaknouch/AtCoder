#include <bits/stdc++.h>
using namespace std;

int main() {
    string s; cin >> s;
    int ans = 1;
    for(int i = 1; i < s.size(); i += 2) {
        if(s[i]=='+') ans ++;
        else ans --;
    }
    cout << ans << endl;
}