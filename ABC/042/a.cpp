#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> abc(3);cin >> abc[0] >> abc[1] >> abc[2];
    sort(abc.begin(), abc.end());
    cout << (abc[0]==5 && abc[1]==5 && abc[2]==7 ? "YES" : "NO") << endl;
    return 0;
}