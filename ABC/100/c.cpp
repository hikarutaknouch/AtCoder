#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    vector<int> a(n);
    long count = 0;
    for(int i = 0; i < n; i ++) {
        cin >> a[i];
        while(a[i]%2==0) {
            count ++;
            a[i] /= 2;
        }
    }
    cout << count << endl;
}