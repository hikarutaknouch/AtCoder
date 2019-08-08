#include <bits/stdc++.h>
#define REP(i, n) for(int i = 0; i < n; ++i)
#define REPP(i, n) for(int i = 1; i <= n; ++i)
#define REPR(i, n) for(int i = n-1; i >= 0; --i)
#define FOR(i, m, n) for(int i = m; i < n; ++i)
#define ALL(v) v.begin(), v.end()
#define UNIQUE(v) v.erase(unique(v.begin(), v.end()), v.end());
using namespace std;
typedef long long ll;
typedef pair<ll, ll> P;
const ll MOD = 1000000007;
const ll INF = 1000000000;

int main() {
    ll n; cin >> n;
    string s; cin >> s;
    vector<ll> btow, wtob;
    ll tmp = 0;
    REP(i,n) {
        tmp += (s[i]=='#');
        while (s[i] == s[i+1] && i+1<n) {
            i++;
            tmp += (s[i]=='#');
        }
        btow.push_back(tmp);
    }
    reverse(ALL(s));
    tmp = 0;
    REP(i,n) {
        tmp += (s[i]=='.');
        while (s[i] == s[i+1] && i+1<n) {
            i++;
            tmp += (s[i]=='.');
        }
        wtob.push_back(tmp);
    }
    reverse(ALL(wtob));
    reverse(ALL(s));
    int l = btow.size();
    ll ans = INF;
    if(l==1) ans = 0;
    else if(l==2) {
        tmp = 0;
        bool flag = (s[0]=='.');
        REP(i,n) {
            if(s[i]=='#') flag = false;
            tmp += (!flag && s[i]=='.');
        }
        ans = min(ans,tmp);
        reverse(ALL(s));
        tmp = 0;
        flag = (s[0]=='#');
        REP(i,n) {
            if(s[i]=='.') flag = false;
            tmp += (!flag && s[i]=='#');
        }
        ans = min(ans,tmp);
    }
    else {
        REP(i,l-2) {
            ans = min(ans, btow[i]+wtob[i+2]);
        }
    }
    cout << ans << endl;
    return 0;
}