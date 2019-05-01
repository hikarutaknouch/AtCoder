#include <bits/stdc++.h>
using namespace std;

int main() {
    int h,w; cin >> h >> w;
    vector<string> c(h+2);
    string s = "";
    for(int i = 0; i < w+2; i ++) s += '.';
    c[0] = s;
    c[h+1] = s;
    for(int i = 1; i <= h; i ++) {
        string S; cin >> S;
        c[i] = '.' + S + '.';
    }
    for(int i = 1; i <= h; i ++) {
        for(int j = 1; j <= w; j ++) {
            int count = 0;
            if(c[i][j]=='.') {
                if(c[i-1][j-1]=='#') count++;
                if(c[i-1][j]=='#') count++;
                if(c[i-1][j+1]=='#') count++;
                if(c[i][j-1]=='#') count++;
                if(c[i][j+1]=='#') count++;
                if(c[i+1][j-1]=='#') count++;
                if(c[i+1][j]=='#') count++;
                if(c[i+1][j+1]=='#') count++;
                cout << count;
            }
            else cout << c[i][j];
        }
        cout << endl;
    }
}