#include <bits/stdc++.h>
using namespace std;

int main() {
    string s; cin >> s;
    string s1 = s.substr(0,2);
    string s2 = s.substr(2,2);
    int num1 = stoi(s1);
    int num2 = stoi(s2);
    if(num1 >= 1 && num1 <= 12 && num2 >= 1 && num2 <= 12) cout << "AMBIGUOUS" << endl;
    else if(num1 >= 1 && num1 <= 12 && num2 >= 0) cout << "MMYY" << endl;
    else if(num1 >= 0 && num2 >= 1 && num2 <= 12) cout << "YYMM" << endl;
    else cout << "NA" << endl;
    return 0;
}