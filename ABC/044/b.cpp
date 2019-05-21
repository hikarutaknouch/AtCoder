#include <bits/stdc++.h>
using namespace std;

int main() {
    string w; cin >> w;
    vector<int> ans(26, 0);
    for(int i = 0; i < w.length(); i ++) {
        ans[w[i]-97] ++;
    }
    for(int i = 0; i < 26; i ++) {
        if(ans[i]%2==1) {
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
    return 0;
}