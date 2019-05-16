#include <bits/stdc++.h>
using namespace std;

int main() {
    string s; cin >> s;
    string str = "CODEFESTIVAL2016";
    int count = 0;
    for(int i = 0; i < s.length(); i ++) {
        if(s[i]!=str[i]) count ++;
    }
    cout << count << endl;
}