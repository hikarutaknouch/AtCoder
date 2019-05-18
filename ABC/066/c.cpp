#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i ++) cin >> a[i];
    vector<int> b(n, 0);
    bool j = true;
    int l = 0;
    int r = n-1;
    for(int i = n-1; i >= 0; i --) {
        if(j) {
            b[l] = a[i];
            l ++;
            j = false;
        }
        else {
            b[r] = a[i];
            r --;
            j = true;
        }
    }
    for (int i = 0; i < n; i++) {
        if(i==n-1) cout << b[i] << endl;
        else cout << b[i] << " ";
    }
}