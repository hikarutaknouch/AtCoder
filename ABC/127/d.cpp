#include <bits/stdc++.h>
using namespace std;
typedef pair<long long, long long> p;

int main() {
    long long n,m; cin >> n >> m;
    vector<long long> a(n);
    for(int i = 0; i < n; i ++) cin >> a[i];
    vector<p> bc(m);
    for(int i = 0; i < m; i ++) {
        long long b, c; cin >> b >> c;
        bc[i] = make_pair(c,b);
    }
    sort(a.begin(), a.end());
    sort(bc.begin(), bc.end());
    long long sum = 0;
    for(int i = 0; i < n; i ++) {
        if(bc.back().first<= a[i] || bc.empty()) sum += a[i];
        else {
            sum += bc.back().first;
            bc.back().second --;
            if(bc.back().second == 0) bc.pop_back();
        }
    }
    cout << sum << endl;
    return 0;
}