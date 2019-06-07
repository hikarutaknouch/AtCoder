#include <bits/stdc++.h>
#define REP(i, n) for(int i = 0; i < n; i++)

using namespace std;

typedef long long ll;
typedef pair<string, int> p;

int main() {
    int n; cin >> n;
    vector<p> sp(n);
    int Max = 0;
    int sum = 0;
    int index = -1;
    REP(i,n) {
        cin >> sp[i].first >> sp[i].second;
        sum += sp[i].second;
        Max = max(sp[i].second, Max);
        if(sp[i].second == Max) index = i;
    }
    cout << (Max > sum/2 ? sp[index].first : "atcoder") << endl;
    return 0;
}