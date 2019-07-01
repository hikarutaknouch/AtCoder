#include <bits/stdc++.h>
#define REP(i, n) for(int i = 0; i < n; i++)
#define REPP(i, n) for(int i = 1; i <= n; i++)
#define REPR(i, n) for(int i = n; i >= 0; i--)
#define FOR(i, m, n) for(int i = m; i < n; i++)
#define ALL(v) v.begin(), v.end()
#define UNIQUE(v) v.erase(unique(v.begin(), v.end()), v.end());
using namespace std;
typedef long long ll;
typedef pair<int, int> p;
const ll MOD = 1000000007;

int main() {
    int n; cin >> n;
    vector<int> odd(10e5, 0);
    vector<int> even(10e5, 0);
    REP(i,n) {
        int v; cin >> v;
        if(i%2==0) even[v] ++;
        else odd[v] ++;
    }
    int ans = n;
    vector<p> oddChange;
    vector<p> evenChange;
    REPP(i,(int)10e5) {
        if(odd[i]!=0) oddChange.push_back(make_pair(odd[i],i));
        if(even[i]!=0) evenChange.push_back(make_pair(even[i],i));
    }
    sort(oddChange.begin(), oddChange.end(), greater<pair<int,int>>());
    sort(evenChange.begin(), evenChange.end(), greater<pair<int,int>>());
    if(oddChange[0].second==evenChange[0].second) {
        ans -= max(oddChange[0].first, evenChange[0].first);
        if(oddChange[0].first == evenChange[0].first) ans -= max(oddChange[1].first, evenChange[1].first);
        else if(oddChange[0].first > evenChange[0].first) ans -= evenChange[1].first;
        else ans -= oddChange[1].first;
    }
    else ans -= oddChange[0].first + evenChange[0].first;
    cout << ans << endl;
    return 0;
}