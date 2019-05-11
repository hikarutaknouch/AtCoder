#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    int ab = 0;
    int a = 0;
    int b = 0;
    int ba = 0;
    for(int i = 0; i < n; i ++) {
        string s; cin >> s;
        int l = s.size();
        if(s[l-1]=='A') a++;
        if(s[0]=='B') b++;
        if(s[0]=='B' && s[l-1]=='A') ba ++;
        for(int j = 0; j < l-1; j ++) {
            if(s[j]=='A' && s[j+1]=='B') ab ++;
        }
    }
    if(a==ba && b==ba) cout << ab + max(0,ba-1) << endl;
    else cout << ab + min(a,b) << endl;
}