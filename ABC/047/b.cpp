#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int w,h,n; cin >> w >> h >> n;
    int r = w;
    int l = 0;
    int H = h;
    int L = 0;
    for(int i = 0; i < n; i ++) {
        int x, y, a; cin >> x >> y >> a;
        if(a==1) l = max(l,x);
        else if(a==2) r = min(r,x);
        else if(a==3) L = max(L,y);
        else if(a==4) H = min(H,y);
        else continue;
    }
    int ans = max(0, r-l) * max(0, H-L);
    cout << (ans>0 ? ans : 0) << endl;
}