#include <bits/stdc++.h>
using namespace std;

int main() {
    string s; cin >> s;
    int w = 0;
    int b = 0;
    if(s[0]=='W') w ++;
    else b ++;
    for(int i = 1; i < s.length(); i ++) {
        if(s[i]==s[i-1]) continue;
        else {
            if(s[i]=='W') w ++;
            else b ++;
        }
    }
    int ans;
    if(w==b) ans = w+b-1;
    else ans = min(w,b) * 2;
    cout << ans << endl;
}