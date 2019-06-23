#include <bits/stdc++.h>
#define REP(i, n) for(int i = 0; i < n; i++)
#define REPP(i, n) for(int i = 1; i <= n; i++)
#define REPR(i, n) for(int i = n; i >= 0; i--)
#define FOR(i, m, n) for(int i = m; i < n; i++)
#define ALL(v) v.begin(), v.end()
#define UNIQUE(v) v.erase(unique(v.begin(), v.end()), v.end());
using namespace std;
typedef long long ll;
typedef pair<ll, ll> p;
const ll MOD = 1000000007;

bool compare_by_b(pair<int, int> a, pair<int, int> b) {
    if(a.second != b.second){
        return a.second < b.second;
    }else{
        return a.first < b.first;
    }
}

int main() {
    int n; cin >> n;
    vector<p> ab(n);
    REP(i,n) cin >> ab[i].first >> ab[i].second;
    sort(ab.begin(), ab.end(), compare_by_b);
    bool ans = true;
    int time = 0;
    REP(i,n) {
        time += ab[i].first;
        if(time>ab[i].second) {
            ans = false;
            break;
        }
    }
    cout << (ans ? "Yes" : "No") << endl;
    return 0;
}