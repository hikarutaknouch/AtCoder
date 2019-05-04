#include <bits/stdc++.h>
using namespace std;

int main() {
    string s; cin >> s;
    string az = "abcdefghijklmnopqrstuvwxyz";
    unordered_set<int> S;
    for(int i = 0; i < s.size(); i ++) S.insert(s[i]);
    if(S.size()==26) {
        cout << "None" << endl;
        return 0;
    }
    for(int i = 0; i < S.size(); i ++) {
        if(S.find(az[i]) != S.end()) {
            az.erase(az.begin()+i);
            i --;
        }
    }
    cout << az[0] << endl;
}