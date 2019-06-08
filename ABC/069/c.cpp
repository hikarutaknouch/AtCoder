#include <bits/stdc++.h>
#define REP(i, n) for(int i = 0; i < n; i++)

using namespace std;

typedef long long ll;

int main() {
    int n; cin >> n;
    int t = 0; int f = 0;
    vector<ll> a(n);
    REP(i,n) {
        cin >> a[i];
        if(a[i]%4==0) f ++;
        else {
            if(a[i]%2==0) t ++;
            else continue;
        }
    }
    cout << (n-2*f <= 1 || n-2*f-t<=0 ? "Yes" : "No") << endl;
}