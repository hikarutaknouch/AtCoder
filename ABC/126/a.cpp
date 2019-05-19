#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,k; cin >> n >> k;
    string s; cin >> s;
    for(int i = 0; i < n; i ++) {
        if(i==k-1) {
            if(s[i]=='A') s[i] = 'a';
            if(s[i]=='B') s[i] = 'b';
            if(s[i]=='C') s[i] = 'c';
        }
    }
    cout << s << endl;
}