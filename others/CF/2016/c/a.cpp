#include <bits/stdc++.h>
using namespace std;

int main() {
    string s; cin >> s;
    int c = 10e7;
    int f = 0;
    for(int i = 0; i < s.length(); i ++) {
        if(s[i]=='C') c = min(i,c);
        if(s[i]=='F') f = max(i,f);
    }
    cout << (c<f ? "Yes" : "No") << endl;
}