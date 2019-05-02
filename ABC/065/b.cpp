#include <bits/stdc++.h>
using namespace std;

int solve(int n, vector<int> a) {
    int count = 0;
    int b = 0;
    int v;
    while(count<n) {
        count ++;
        v = a[b];
        if(v == 2) return count;
        b = v-1;
    }
    return -1;
}
int main() {
    int n; cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    cout << (solve(n,a)) << endl;
}