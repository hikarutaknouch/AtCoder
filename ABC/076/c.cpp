#include <bits/stdc++.h>
using namespace std;

int main() {
    string s,t; cin >> s >> t;
    vector<string> ans;
    if(s.size()<t.size()) {
        cout << "UNRESTORABLE" << endl;
        return 0;
    }
    for(int i = 0; i <= s.size()-t.size(); i ++) {
        string tmp = s;
        for(int j = 0; j < t.length(); j ++) {
            if(i+j>s.size()-1) break;
            if(tmp[i+j]=='?' || tmp[i+j]==t[j]) tmp[i+j] = t[j];
            else break;
            if(j==t.length()-1) {
                for(int k = 0; k < tmp.length(); k ++) {
                    if(tmp[k]=='?') tmp[k] = 'a';
                }
                ans.push_back(tmp);
            }
        }
    }
    sort(ans.begin(), ans.end());
    cout << (ans.size() > 0 ? ans[0] : "UNRESTORABLE") << endl;
    return 0;
}