#include <bits/stdc++.h>
using namespace std;

int main() {
    string s; cin >> s;
    string ans = "";
    for(int i = 0; i < s.length(); i ++) {
        switch (s[i])
        {
        case '0':
            ans += '0';
            break;
        case '1':
            ans += '1';
            break;
        case 'B':
            if(ans.length()!=0) {
                ans.erase(ans.length()-1,1);
            }
            break;
        }
    }
    cout << ans << endl;
}