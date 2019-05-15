#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    for(int i = n; i <= 999; i ++) {
        if(i/100==i%10 && i%10==i%100/10) {
            cout << i << endl;
            break;
        }
    }
}