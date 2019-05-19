#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    vector<int> a(n);
    int m = 0;
    for(int i = 0; i < n; i ++) {
        cin >> a[i];
        if(a[i]<0) {
            m ++;
            a[i] *= -1;
        }
    }
    long long sum;
    if(m%2==0) sum = accumulate(a.begin(), a.end(),0LL);
    else sum = accumulate(a.begin(), a.end(),0LL) - (*min_element(a.begin(), a.end()) * 2);
    cout << sum << endl;
    return 0;
}