#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    vector<int> a(n);
    for(int i = 0;i < n; i ++) cin >> a.at(i);
    int ave = accumulate(a.begin(), a.end(), 0) / a.size();
    for(int i = 0;i < n; i ++) cout << abs(a.at(i) - ave) << endl;
}