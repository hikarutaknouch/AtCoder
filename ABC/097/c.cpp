#include <bits/stdc++.h>
using namespace std;

int main() {
    string s; cin >> s;
    int k; cin >> k;
    int n = s.length();
    vector<string> subs;
    for(int i = 0; i < n; i ++) {
        string tmp = "";
        for(int j = i; j < min(n,k+i); j ++) {
            tmp += s[j];
            subs.push_back(tmp);
        }
    }
    sort(subs.begin(), subs.end());
    unique(subs.begin(), subs.end());
    cout << subs[k-1] << endl;
}