#include <bits/stdc++.h>
using namespace std;

int main() {
    int r,g,b,n; cin >> r >> g >> b >> n;
    long ans = 0;
    for(int i = 0; i <= n/r; i ++) {
        for(int j = 0; j <= n/g; j ++) {
            int k = n-(i*r)-(j*g);
            if(k%b==0 && k>=0) ans ++;
        }
    }
    cout << ans << endl;
}