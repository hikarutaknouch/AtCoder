#include <bits/stdc++.h>
using namespace std;

int main() {
    int h,w; cin >> h >> w;
    vector<string> a(h);
    for (int i = 0; i < h; i++) cin >> a[i];
    for(int i = 0; i < a.size(); i ++) {
        for(int j = 0; j < a[0].size(); j ++) {
            if(a[i][j]=='#') break;
            if(j==w-1) {
                a.erase(a.begin() + i);
                i --;
            }
        }
    }
    h = a.size();
    for(int i = 0; i < w; i ++) {
        for(int j = 0; j < h; j ++) {
            if(a[j][i]=='#') break;
            if(j==h-1) {
                for(int k = 0; k < h; k ++) {
                    a[k].erase(a[k].begin()+i);
                }
                i --;
                w --;
            }
        }
    }
    for(int i = 0; i < h; i++) cout << a[i] << endl;
}