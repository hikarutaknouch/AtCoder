#include <bits/stdc++.h>
#define REP(i, n) for(int i = 0; i < n; ++i)
#define REPP(i, n) for(int i = 1; i <= n; ++i)
#define REPR(i, n) for(int i = n-1; i >= 0; --i)
#define FOR(i, m, n) for(int i = m; i < n; ++i)
#define ALL(v) v.begin(), v.end()
using namespace std;
typedef long long ll;
const int MOD = 1000000007;

template<typename T1,typename T2> inline void chmin(T1 &a,T2 b) {if(a>b) a=b;}
template<typename T1,typename T2> inline void chmax(T1 &a,T2 b) {if(a<b) a=b;}

double rad_to_deg(double x) {
    double res = x/(2*M_PI)*360;
    return res;
}

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    double a,b,x; cin >> a >> b >> x;
    double max_v = pow(a,2)*b;
    double ans,h;
    if(max_v>=2*x) {
        h = 2*x / (a*b);
        ans = rad_to_deg(atan2(b,h));
    }
    else {
        h = 2*(max_v-x) / (a*a);
        ans = rad_to_deg(atan2(h,a));
    }
    cout << setprecision(10) << ans << endl;
    return 0;
}