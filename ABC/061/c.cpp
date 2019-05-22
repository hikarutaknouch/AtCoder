#include <bits/stdc++.h>
using namespace std;

typedef pair<int, int> p;

int main() {
    long n,k; cin >> n >> k;
    vector<p> ab(n);
    for(int i = 0; i < n; i ++) {
        int a,b; cin >> a >> b;
        ab[i] = make_pair(a,b);
    }
    sort(ab.begin(), ab.end());
    long ans = 0;
    long count = 0;
    for(int i = 0; i < n; i ++) {
        count += ab[i].second;
        if(count >= k) {
            ans = ab[i].first;
            break;
        }
    }
    cout << ans << endl;
}