#include <bits/stdc++.h>
using namespace std;

const long INF = 10e10;

int main() {
    long n; cin >> n;
    vector<long> a(n+1);
    for(int i = 0; i < n; i ++) cin >> a[i];
    a[n] = INF;
    sort(a.begin(), a.end());
    long cnt = 0;
    long eo;
    for(int i = 0; i < n; i ++) {
        eo ++;
        if(a[i] != a[i+1]) {
            if(eo%2==1) cnt ++;
            eo = 0L;
        }
    }
    cout << cnt << endl;
    return 0;
}