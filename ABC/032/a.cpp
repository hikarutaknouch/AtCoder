#include <bits/stdc++.h>
#define REP(i, n) for(int i = 0; i < n; i++)

using namespace std;

typedef long long ll;

const ll INF = 10e7;

int main() {
    int a,b,n; cin >> a >> b >> n;
    int ans;
    for(int i = n; i <= INF; i++) {
        if(i%a==0 && i%b==0) {
            ans = i;
            break;
        }
    }
    cout << ans << endl;
    return 0;
}