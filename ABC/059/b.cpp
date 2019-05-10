#include <bits/stdc++.h>
using namespace std;

int main() {
    string a, b; cin >> a >> b;
    if(a.length() < b.length()) cout << "LESS" << endl;
    else if(a.length() > b.length()) cout << "GREATER" << endl;
    else {
        for(int i = 0; i < a.length(); i ++) {
            if(i==a.length()-1 && a[i]==b[i]) {
                cout << "EQUAL" << endl;
                return 0;
            }
            if(a[i]==b[i]) continue;
            else if(a[i]>b[i]) {
                cout << "GREATER" << endl;
                return 0;
            }
            else {
                cout << "LESS" << endl;
                return 0;
            }
        }
    }
}