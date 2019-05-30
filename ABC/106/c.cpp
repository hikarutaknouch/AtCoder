#include <bits/stdc++.h>
using namespace std;

int main() {
    string s; cin >> s;
    long long k; cin >> k;
    long long n = s.length();
    char ans = '1';
    for(int i = 0; i < min(n,k); i ++) {
        if(s[i]!=ans) {
            ans = s[i];
            break;
        }
    }
    cout << ans << endl;
}