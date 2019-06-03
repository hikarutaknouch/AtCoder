#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    vector<int> a(n);
    int sum = 0;
    for(int i = 0; i < n; i ++) {
        cin >> a[i];
        sum += a[i];
    }
    int v1 = sum/n;
    int v2 = (sum-1)/n + 1;
    int cost1 = 0;
    int cost2 = 0;
    for(int i = 0; i < n; i++) cost1 += pow(a[i]-v1, 2);
    for(int i = 0; i < n; i++) cost2 += pow(a[i]-v2, 2);
    cout << min(cost1, cost2) << endl;
    return 0;
}