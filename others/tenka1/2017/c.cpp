#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const long long MAX = 3500LL;

int main() {
    ll N; cin >> N;
    for(ll h = 1; h <= MAX; h ++) {
        for(ll n = 1; n <= MAX; n ++) {
            ll x = N*h*n;
            ll y = 4*h*n - N*(n+h);
            if(y>0 && x%y==0) {//if(x%y==0 && y>0)だったらランタイムエラーになったのなんでだろ。
                ll w = x/y;
                cout << h << " " << n << " " << w << endl;
                return 0;
            }
        }
    }
    return 0;
}