#include <bits/stdc++.h>
using namespace std;

int main() {
    string s; cin >> s;
    string ans = "";
    for(int i = s.size()-1; i > 0; i -=2) {
        s.erase(s.begin()+i);
        s.erase(s.begin()+i-1);
        string s1 = "";
        string s2 = "";
        for(int j = 0; j < s.size()/2; j ++) s1 += s[j];
        for(int j = s.size()/2; j < s.size(); j ++) s2 += s[j];
        if(s1==s2) {
            ans = s1;
            break;
        }
    }
    cout << ans.size()*2 << endl;
}