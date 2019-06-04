#include <bits/stdc++.h>
#define REP(i, n) for(int i = 0; i < n; i++)

using namespace std;

typedef long long ll;
typedef pair<ll, ll> p;

const ll MOD = 10e9+7;

int main() {
    int n,m;cin >> n >> m;
    vector<int> a(n);
    vector<int> b(n);
    REP(i,m) {
        int A,B; cin >> A >> B;
        if(A==1) b[B-1]++;
        if(B==n) a[A-1]++;
    }
    bool ans = 0;
    REP(i, n) {
        if(a[i]>0 && b[i]>0) {
            ans = 1;
            break;
        }
    }
    cout << (ans ? "POSSIBLE" : "IMPOSSIBLE")  << endl;
    return 0;
}