#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<string> s(3); cin >> s[0] >> s[1] >> s[2];
    int a = 0; int b = 0; int c = 0;
    int n = 0;
    char now;
    bool flag = 1;
    while(flag) {
        switch (n) {
        case 0:
            a++;
            if(a==s[0].length()+1) {
                cout << 'A' << endl;
                return 0;
            }
            now = s[n][a-1];
            break;
        case 1:
            b ++;
            if(b==s[1].length()+1) {
                cout << 'B' << endl;
                return 0;
            }
            now = s[n][b-1];
            break;
        case 2:
            c++;
            if(c==s[2].length()+1) {
                cout << 'C' << endl;
                return 0;
            }
            now = s[n][c-1];
            break;
        }
        switch (now) {
        case 'a':
            n=0;
            break;
        case 'b':
            n=1;
            break;
        case 'c':
            n=2;
            break;
        }
    }
}