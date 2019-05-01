#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,k; cin >> n >> k;
    int x[n];
    for(int i = 0; i < n; i ++) cin >> x[i];
    int cost = 0;
    for(int i = 0; i < n; i++) {
        cost += min(abs(x[i]-k), abs(x[i]-0)) * 2;
    }
    cout << cost << endl;
}