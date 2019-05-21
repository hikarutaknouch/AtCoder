#include <bits/stdc++.h>
using namespace std;

int main() {
    string s; cin >> s;
    int k; cin >> k;
    int n = s.length();
    vector<string> subs;
    vector<vector<int>> index(26);
    for(int i = 0; i < n; i ++) {
        index[s[i]-97].push_back(i);
    }
    vector<int> priority;
    for(int i = 0; i < 26; i ++) {
        priority.insert(priority.end(), index[i].begin(), index[i].end());
    }
    for(int i = 0; i < n; i ++) {
        string tmp = "";
        for(int j = priority[i]; j < n; j ++) {
            tmp += s[j];
            subs.push_back(tmp);
            if(tmp.length() > k) break;
        }
    }
    sort(subs.begin(), subs.end());
    unique(subs.begin(), subs.end());
    cout << subs[k-1] << endl;
}