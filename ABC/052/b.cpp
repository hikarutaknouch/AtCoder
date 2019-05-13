#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    string s; cin >> s;
    vector<int> x(n+1);
    x[0] = 0;
    for(int i = 1; i <= n; i ++) {
        if(s[i-1]=='I') x[i] = x[i-1] + 1;
        else x[i] = x[i-1] - 1;
    }
    cout << *max_element(x.begin(),x.end()) << endl;
}